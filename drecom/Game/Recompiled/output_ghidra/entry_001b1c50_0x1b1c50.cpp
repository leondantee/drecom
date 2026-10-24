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

// Function: entry_001b1c50
// Address: 0x1b1c50 - 0x1b1cf8
void entry_001b1c50_0x1b1c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1c50_0x1b1c50");
#endif

    switch (ctx->pc) {
        case 0x1b1ca4u: goto label_1b1ca4;
        case 0x1b1cbcu: goto label_1b1cbc;
        case 0x1b1cd8u: goto label_1b1cd8;
        default: break;
    }

    ctx->pc = 0x1b1c50u;

    // 0x1b1c50: 0x73c01628  paddub      $v0, $fp, $zero
    ctx->pc = 0x1b1c50u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x1b1c54: 0x245effff  addiu       $fp, $v0, -0x1
    ctx->pc = 0x1b1c54u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b1c58: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B1C58u;
    {
        const bool branch_taken_0x1b1c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1c58) {
            ctx->pc = 0x1B1C2Cu;
            return;
        }
    }
    ctx->pc = 0x1B1C60u;
    // 0x1b1c60: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x1b1c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1c64: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1b1c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1b1c68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b1c68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1c6c: 0x0  nop
    ctx->pc = 0x1b1c6cu;
    // NOP
    // 0x1b1c70: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1b1c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x1b1c74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b1c74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1c78: 0x0  nop
    ctx->pc = 0x1b1c78u;
    // NOP
    // 0x1b1c7c: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1b1c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1b1c80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b1c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b1c84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1c88: 0x0  nop
    ctx->pc = 0x1b1c88u;
    // NOP
    // 0x1b1c8c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1b1c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1b1c90: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1b1c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b1c94: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x1b1c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1b1c98: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1b1c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b1c9c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1B1C9Cu;
    SET_GPR_U32(ctx, 31, 0x1B1CA4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1B1CA4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B1CA4u) { return; }
    ctx->pc = 0x1B1CA4u;
label_1b1ca4:
    // 0x1b1ca4: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x1b1ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1b1ca8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b1ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b1cac: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1b1cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b1cb0: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x1b1cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1b1cb4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B1CB4u;
    SET_GPR_U32(ctx, 31, 0x1B1CBCu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B1CB4u, 0x1B1CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1CBCu;
label_1b1cbc:
    // 0x1b1cbc: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x1b1cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1b1cc0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1b1cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b1cc4: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1b1cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1b1cc8: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1b1cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b1ccc: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x1b1cccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x1b1cd0: 0xc059e1c  jal         func_167870
    ctx->pc = 0x1B1CD0u;
    SET_GPR_U32(ctx, 31, 0x1B1CD8u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x1B1CD0u, 0x1B1CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1CD8u;
label_1b1cd8:
    // 0x1b1cd8: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1b1cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1b1cdc: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x1b1cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x1b1ce0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1CE0u;
    {
        const bool branch_taken_0x1b1ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ce0) {
            ctx->pc = 0x1B1CF8u;
            return;
        }
    }
    ctx->pc = 0x1B1CE8u;
    // 0x1b1ce8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1b1ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b1cec: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1b1cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b1cf0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B1CF0u;
    SET_GPR_U32(ctx, 31, 0x1B1CF8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B1CF8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B1CF8u) { return; }
    ctx->pc = 0x1B1CF8u;
}
