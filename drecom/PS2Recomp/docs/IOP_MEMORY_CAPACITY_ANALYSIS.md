# IOP heap capacity: CDMODULE.IRX startup failure

## Confirmed from recorded startup traces

This is an evidence-based capacity diagnosis, not a recommendation to raise RAM
limits or replace the allocator without considering reserved regions.

The emulator declares in `iop_memory.h`:

- `RamSize = 0x200000` (2,097,152 bytes)
- `HeapBase = 0x120000`
- `HeapLimit = 0x1F0000` (exclusive)
- **System heap capacity = 0xD0000 = 851,968 bytes**

The reserved call-stack area begins above the heap limit (as implemented by
`iop_emulator.cpp`); extending the heap blindly risks overlap.

The recorded allocations after `ALLOC_LAST` support (hexadecimal addresses):

1. `TSNDDRVM.IRX`: mode 1, 524,288 bytes (`0x80000`) at `0x170000`.
   This occupies `0x170000..0x1F0000` (end exclusive).
2. Pre-existing occupied lower heap up to `0x12C480`, a net footprint of
   `0xC480 = 50,304` bytes from heap base. This footprint is derived from
   addresses and does **not** identify the 26 original allocations individually.
3. `CDMODULE.IRX`: streaming buffer `0x28000 = 163,840` bytes at
   `0x12C480`, ending at `0x154480`.
4. Six `0x4000 = 16,384` byte buffers at `0x154480`, `0x158480`,
   `0x15C480`, `0x160480`, `0x164480`, and `0x168480`.
5. The next `0x4000` allocation fails. The remaining free interval is
   `0x16C480..0x170000`, **`0x3B80 = 15,232` bytes**.

At that point `totalFree = maxFree = 15,232`. A 16,384-byte request is short
by **1,152 bytes**. The **failure is not explained by fragmentation**.

## Full initialization budget

Ghidra's `CdInit()` flow calls `AllocSysMemory` once for a streaming buffer
(`0x28000`) and ten times for 16 KiB buffers, not six.

- Lower-heap prior footprint: 50,304 bytes
- Top-down 512 KiB reserve: 524,288 bytes
- Streaming buffer: 163,840 bytes
- All ten 16 KiB buffers: 163,840 bytes
- **Total required in this footprint: 902,272 bytes**
- **Configured heap capacity: 851,968 bytes**
- **Minimum shortfall: 50,304 bytes** (before any additional allocations)

Thus, making only the seventh small allocation succeed by 1,152 bytes is not a
full solution: four more buffers remain. Rearranging the same non-overlapping
allocations inside this heap cannot create the missing 50,304 bytes.

The `testIopHeapCapacityScenario` regression test in
`ps2xIOP/tests/iop_import_tests.cpp` reproduces the packed footprint, the six
successful 16 KiB buffers, the 15,232-byte free remainder, and the seventh
failure. It does not simulate module behavior or replace a game-runtime test.

## What remains unproven / decisions requiring more evidence

- Why `TSNDDRVM.IRX` reserves 512 KiB, and whether the entire reservation is
  needed simultaneously with `CDMODULE.IRX` buffers.
- Whether other allocations should be temporary and freed before `CdInit()`.
  Analyze `FreeSysMemory` traces and which module owns each block.
- Whether the emulator's static heap partition matches the game's IOP kernel
  and module placement expectations.
- Whether CDMODULE or the game permits a different buffer allocation strategy.

**Do not increase `HeapLimit` from `0x1F0000` arbitrarily.** The emulator
uses the upper IOP RAM area for call stacks. Do not reduce the TSNDDRVM
reservation without verifying its actual use.

## Separate EE issue

The generated `Message_init_0x296060.cpp` files exist under
`drecom/Game/Recompiled/output_ghidra/` and `.../output/`.
At guest PC `0x2960A0`, `sw $v0, 0($s1)` stores through
`$s1=0x0080CB10` in the EE address space. Previous observations showed
`$v0=0x00E01000`. Neither address is inside the 2 MiB IOP memory.
Investigate the `MappingT32` / TIM2 pointer interpretation independently;
a valid destination address alone does not establish whether the stored pointer
is valid for the later texture code.

## Validation

GitHub Actions workflow `.github/workflows/iop-pr-regression.yml` builds the
isolated IOP library, runs all IOP CTest suites, and runs the same suite with
AddressSanitizer and UndefinedBehaviorSanitizer. Passing these checks does not
demonstrate successful game boot.

## Compatibility change (experimental; 2026-10-24)

Further review of the recorded `test_allocator_fix.log` shows resident IRX
modules being loaded below approximately `0x70000` at the moment
`CDMODULE.IRX` initializes. The original system heap began at `0x120000`,
leaving a large unused separation in this observed boot.

The IOP memory allocator's **`HeapBase` is now `0x100000`** (1 MiB) while
`HeapLimit` remains `0x1F0000` and `RamSize` remains 2 MiB. The IRX
loader already enforces `base + span < HeapBase` for relocatable modules,
so future module loads cannot silently cross the new heap boundary.
Guest absolute-address modules and future runtime behavior still require
validation with the original disc.

The new system heap capacity is `0xF0000 = 983,040` bytes. The observed
`CDMODULE` + `TSNDDRVM` + earlier-allocation footprint of `902,272`
bytes now fits with **80,768 bytes left** for subsequent allocations.
This explicitly preserves the upper call-stack area starting at `0x1F0000`.

`testIopHeapCapacityScenario` now verifies both that the old heap would
be too small and that all ten audio buffers fit with the new boundary.
These are compatibility tests, not proof that the game boots or that this
change is valid for every combination of IRX modules.
