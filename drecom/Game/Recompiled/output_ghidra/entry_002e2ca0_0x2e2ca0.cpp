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

// Function: entry_002e2ca0
// Address: 0x2e2ca0 - 0x2e2d14
void entry_002e2ca0_0x2e2ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e2ca0_0x2e2ca0");
#endif

    switch (ctx->pc) {
        case 0x2e2cc8u: goto label_2e2cc8;
        case 0x2e2ce0u: goto label_2e2ce0;
        default: break;
    }

    ctx->pc = 0x2e2ca0u;

    // 0x2e2ca0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e2ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2ca4: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x2e2ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2ca8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e2ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2cac: 0x8c511210  lw          $s1, 0x1210($v0)
    ctx->pc = 0x2e2cacu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
    // 0x2e2cb0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e2cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2cb4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e2cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2cb8: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x2e2cb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2e2cbc: 0x844611f2  lh          $a2, 0x11F2($v0)
    ctx->pc = 0x2e2cbcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x2e2cc0: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x2E2CC0u;
    SET_GPR_U32(ctx, 31, 0x2E2CC8u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x2E2CC0u, 0x2E2CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2CC8u;
label_2e2cc8:
    // 0x2e2cc8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2ccc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e2cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2cd0: 0xc46c11f8  lwc1        $f12, 0x11F8($v1)
    ctx->pc = 0x2e2cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e2cd4: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x2e2cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e2cd8: 0xc058f20  jal         func_163C80
    ctx->pc = 0x2E2CD8u;
    SET_GPR_U32(ctx, 31, 0x2E2CE0u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x2E2CD8u, 0x2E2CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2CE0u;
label_2e2ce0:
    // 0x2e2ce0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2e2ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2e2ce4: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x2e2ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2ce8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e2ce8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2cec: 0x0  nop
    ctx->pc = 0x2e2cecu;
    // NOP
    // 0x2e2cf0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e2cf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2cf4: 0x0  nop
    ctx->pc = 0x2e2cf4u;
    // NOP
    // 0x2e2cf8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2CF8u;
    {
        const bool branch_taken_0x2e2cf8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2cf8) {
            ctx->pc = 0x2E2D14u;
            return;
        }
    }
    ctx->pc = 0x2E2D00u;
    // 0x2e2d00: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2e2d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2e2d04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e2d04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2d08: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x2e2d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2d0c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e2d0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e2d10: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2e2d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x2e2d14u;
}
