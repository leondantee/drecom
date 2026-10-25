# DRECOM Trial (Japan) — GS scanout bring-up

Date: 2026-10-24. Scope: **native PS2Recomp runner**, not the Unity bridge.

## Reported symptom (operator observation)

- Windows runner opens a window with an unmoving, mostly corrupted/striped image.
- Console `[run:tick]` and `[frame:upload]` messages continue to advance.
- Previously reported: presentation approximately 512x224, framebuffer 160.
- A live tick counter alone is **not** proof that game state or displayed pixels advance.
- The previously observed `pc=0x17a1d0` maps to `MappingT32_0x17a160` in
  `Game/Recompiled/output/MappingT32_0x17a160.cpp`. It is the entry of
  an internal mapping loop/function block, not automatically evidence of a
  stalled VBlank or DMA wait. To diagnose a genuine stall, capture multiple
  program counters, call context, framebuffer hashes and DMA state.

## Independently confirmed source defects

1. `Kernel/Stubs/GS.cpp`: `sceGsSetDefDBuffDc` and `sceGsSetDefDBuff`
   previously hard-coded `DISPLAY=(636,32,MAGH=0,DW=w-1,DH=h-1)`.
   This ignored the current NTSC/PAL, interlace and pixel-clock geometry.
2. `gs_cpu_backend.cpp`: `PresentFromLocalMemory` previously sampled
   `DH+1` VRAM rows even for `SMODE2=3` (interlaced field scanout), and
   overlaid both display circuits at output (0,0), ignoring their DX/DY.
3. These source defects resemble the *type* of GS presentation faults
   independently documented by Gui-Tora for the **different**, PAL retail
   DMC executable. Their game-specific addresses and patches cannot be
   treated as the Trial's truth.

Reference research (read-only; no upstream commits/branches/PRs):
- https://github.com/Gui-Tora/dmc-recomp/blob/master/analysis/notes/VISUAL_001_LETTERBOX_BAND.md
- https://github.com/Gui-Tora/dmc-recomp/blob/master/README.md

No foreign patch file has been applied or vendored. The implementation
here is written specifically in DRECOM from register geometry.

## Changes made to DRECOM main

- `8ed2806` — video-mode-dependent DISPLAY setup in GS HLE.
- `390dc1e` — field-row sampling and CRT1/CRT2 DX/DY composition.
- `77ce12a`, `ac9598d`, `fcb4a52` — explicit NTSC/PAL and VRAM scanout regressions.
- `5667c93`, `e0e7462` — focused PS2GS test filter and GitHub Actions job.
- `822cbe6` — optional unchanged-frame/GS-register diagnostic log.

### Verification contract

The changes are committed, but **no successful local game run has been
observed after these changes**. Do not claim that the game boots to a menu
or becomes playable without fresh visual evidence.

1. Check the Windows game runner build in GitHub Actions on latest main.
2. Check the new `GS scanout regression` job on main.
3. Test the resulting executable with the user's **local** Trial ELF,
   extracted files and ISO (never upload proprietary disc data to GitHub).
4. If the window still does not change, restart the runner from PowerShell
   with `$env:DRECOM_GS_TRACE = "1"`. Every ~120 presentations the logger
   prints `[DRECOM-GS]` with pixel hash, color count, PMODE, SMODE2 and
   DISPLAY1/2. A stable hash across ticks distinguishes an unchanging
   presented image from output that is updating invisibly.
5. Compare a matching Trial screen's GS privileged registers and VRAM
   against PCSX2; **do not** reuse PAL retail-specific addresses.
6. If `sourceFbp` remains fixed and hashes stay constant, inspect guest
   EE/IOP progress and whether new DMA/GIF commands alter VRAM before
   making further renderer changes.

Goal: moving, recognizable images from the Trial's **original** logic.
A non-crashing window or passing C++ build alone is insufficient.


## Follow-up — complete display environment and CI triage

An additional HLE defect was confirmed in source: `sceGsSetDefDispEnv`
previously called `writeGsDispEnv`, which only changed `DISPFB` and
`DISPLAY` while preserving the caller's pre-existing `PMODE`,
`SMODE2` and `BGCOLOR`. On fresh or poisoned guest memory this leaves
a partially initialized display environment. The Trial implementation now
writes the complete five-register structure, consistently with this
runtime's existing double-buffer defaults. This is an internal consistency
fix, **not** a claim of matching the original Trial SDK values byte-for-byte.

- `3ad2341`: full display-environment initialization and invalid-address
  failure reporting.
- `5695be5`: regression using deliberately poisoned memory and separate
  NTSC/PAL display offsets.
- `d453e21`: repair three pre-existing scanout test assertions that assumed
  the wrong host-output shape.

The first targeted PS2GS workflow built successfully but reported
**73 passing / 3 failing cases**, not a compiler error:
https://github.com/leondantee/drecom/actions/runs/40140395119

The two field-scanout cases indexed returned pixels using a 640-pixel row
stride, although `copyLatchedHostPresentationFrame` explicitly returns
tightly packed rows of `outWidth` (512 in these cases). A third legacy
expectation checked `DISPLAY.DW=639` for a 640-pixel NTSC buffer, although
the updated 4-clock-per-pixel layout correctly stores `DW=2559`.
Those assertion inconsistencies are repaired in `d453e21` without changing
the rasterizer to satisfy an incorrect test.

Verification remains open until the updated runs finish and are inspected:
- GS regressions: https://github.com/leondantee/drecom/actions/workflows/gs-scanout-regression.yml
- Windows runner: https://github.com/leondantee/drecom/actions/workflows/game-runner-windows.yml

Most importantly, neither tests nor compilation prove that the user's
previously static window now displays valid advancing gameplay. That
requires a new run with the local Trial assets and `DRECOM_GS_TRACE=1`.


## Diagnostic hardening: distinguish pixel and register progress

Commit `8bdba58` updates the opt-in `DRECOM_GS_TRACE=1` path in
`gs_frontend.cpp`. Previously the code hashed the screen only on
every 120th presentation. A frame could change between the sampled
presentations and still appear unchanged, a false-negative for progress.

The improved probe hashes each presentation when tracing is enabled,
while printing only once per 120 latches. The new fields are:

- `frameChanges120`: number of pixel-hash transitions during the interval.
- `registerChanges120`: changes to the GS display configuration
  (PMODE, SMODE2, DISPFB1/2, DISPLAY1/2, BGCOLOR), measured separately.
- `stagnantLatches`: latches elapsed since the last pixel-content change.
- `dispfb1`/`dispfb2`: both visible framebuffer register values.

These are *diagnostic counters*, not proof of game progression:
a full-screen moving scene can have a stationary framebuffer register,
and a program stuck in a loop can change pixels continuously.

Interpretation after running the **newly built** runner with the locally
owned Trial files:

- `frameChanges120 > 0`: scanout bytes changed between presentations,
  even if sampled screenshots happened to match.
- `frameChanges120 = 0` and `registerChanges120 > 0`: display state
  changes but visible bytes do not; investigate register interpretation,
  buffer selection and VRAM writes.
- Both zero for multiple intervals: inspect EE progression, IOP RPC,
  GIF/DMA/VIF activity and the original Trial's PCSX2 state.
- `valid=0`: presentation failed; diagnose GS state/backend directly.

The tracer runs only when explicitly enabled, and its hashing overhead
is not included in performance benchmarks. All runtime results remain
unverified until someone executes the resulting Windows build against
local game data; GitHub CI cannot do this without the original disc.
