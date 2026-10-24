#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001b2a60
// Address: 0x1b2a60 - 0x1b2b64
void entry_001b2a60_0x1b2a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2a60_0x1b2a60");
#endif

    switch (ctx->pc) {
        case 0x1b2a8cu: goto label_1b2a8c;
        case 0x1b2a9cu: goto label_1b2a9c;
        case 0x1b2af8u: goto label_1b2af8;
        default: break;
    }

    ctx->pc = 0x1b2a60u;

    // 0x1b2a60: 0x141940  sll         $v1, $s4, 5
    ctx->pc = 0x1b2a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x1b2a64: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b2a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b2a68: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b2a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b2a6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2a70: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x1b2a70u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b2a74: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b2a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2a78: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1b2a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b2a7c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b2a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2a80: 0x26460120  addiu       $a2, $s2, 0x120
    ctx->pc = 0x1b2a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x1b2a84: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B2A84u;
    SET_GPR_U32(ctx, 31, 0x1B2A8Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B2A84u, 0x1B2A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A8Cu;
label_1b2a8c:
    // 0x1b2a8c: 0xc7ac00e0  lwc1        $f12, 0xE0($sp)
    ctx->pc = 0x1b2a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b2a90: 0xc7ad00e8  lwc1        $f13, 0xE8($sp)
    ctx->pc = 0x1b2a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b2a94: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1B2A94u;
    SET_GPR_U32(ctx, 31, 0x1B2A9Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1B2A94u, 0x1B2A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A9Cu;
label_1b2a9c:
    // 0x1b2a9c: 0xe64011f8  swc1        $f0, 0x11F8($s2)
    ctx->pc = 0x1b2a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4600), bits); }
    // 0x1b2aa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2aa4: 0xa24211ee  sb          $v0, 0x11EE($s2)
    ctx->pc = 0x1b2aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b2aa8: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x1b2aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1b2aac: 0xae421210  sw          $v0, 0x1210($s2)
    ctx->pc = 0x1b2aacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4624), GPR_U32(ctx, 2));
    // 0x1b2ab0: 0x141940  sll         $v1, $s4, 5
    ctx->pc = 0x1b2ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x1b2ab4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b2ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b2ab8: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b2ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b2abc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2ac0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1b2ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b2ac4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1b2ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b2ac8: 0xa64211f4  sh          $v0, 0x11F4($s2)
    ctx->pc = 0x1b2ac8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4596), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b2acc: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b2accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2ad0: 0x90420015  lbu         $v0, 0x15($v0)
    ctx->pc = 0x1b2ad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 21)));
    // 0x1b2ad4: 0xa24211f0  sb          $v0, 0x11F0($s2)
    ctx->pc = 0x1b2ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4592), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b2ad8: 0x141940  sll         $v1, $s4, 5
    ctx->pc = 0x1b2ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x1b2adc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b2adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b2ae0: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b2ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b2ae4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2ae8: 0x26441200  addiu       $a0, $s2, 0x1200
    ctx->pc = 0x1b2ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4608));
    // 0x1b2aec: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x1b2aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1b2af0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B2AF0u;
    SET_GPR_U32(ctx, 31, 0x1B2AF8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B2AF8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B2AF8u) { return; }
    ctx->pc = 0x1B2AF8u;
label_1b2af8:
    // 0x1b2af8: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x1b2af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1b2afc: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1b2afcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1b2b00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b2b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b2b04: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1b2b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1b2b08: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1B2B08u;
    {
        const bool branch_taken_0x1b2b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2b08) {
            ctx->pc = 0x1B2C44u;
            return;
        }
    }
    ctx->pc = 0x1B2B10u;
    // 0x1b2b10: 0x92420012  lbu         $v0, 0x12($s2)
    ctx->pc = 0x1b2b10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x1b2b14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b2b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b2b18: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b2b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1b2b1c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B2B1Cu;
    {
        const bool branch_taken_0x1b2b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2b1c) {
            ctx->pc = 0x1B2B64u;
            return;
        }
    }
    ctx->pc = 0x1B2B24u;
    // 0x1b2b24: 0x240203e9  addiu       $v0, $zero, 0x3E9
    ctx->pc = 0x1b2b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x1b2b28: 0xa64211f2  sh          $v0, 0x11F2($s2)
    ctx->pc = 0x1b2b28u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4594), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b2b2c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b2b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2b30: 0x90420014  lbu         $v0, 0x14($v0)
    ctx->pc = 0x1b2b30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1b2b34: 0xa24211ef  sb          $v0, 0x11EF($s2)
    ctx->pc = 0x1b2b34u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4591), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b2b38: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b2b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2b3c: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1b2b3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1b2b40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b2b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b2b44: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1b2b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1b2b48: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1b2b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1b2b4c: 0x24428540  addiu       $v0, $v0, -0x7AC0
    ctx->pc = 0x1b2b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935872));
    // 0x1b2b50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2b54: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1b2b54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2b58: 0xa64211f6  sh          $v0, 0x11F6($s2)
    ctx->pc = 0x1b2b58u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b2b5c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1B2B5Cu;
    {
        const bool branch_taken_0x1b2b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2b5c) {
            ctx->pc = 0x1B2CE0u;
            return;
        }
    }
    ctx->pc = 0x1B2B64u;
}
