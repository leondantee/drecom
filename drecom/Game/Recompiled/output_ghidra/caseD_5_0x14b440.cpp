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

// Function: caseD_5
// Address: 0x14b440 - 0x14b494
void caseD_5_0x14b440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x14b440");
#endif

    switch (ctx->pc) {
        case 0x14b450u: goto label_14b450;
        default: break;
    }

    ctx->pc = 0x14b440u;

    // 0x14b440: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b444: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14b444u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14b448: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14B448u;
    SET_GPR_U32(ctx, 31, 0x14B450u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14B448u, 0x14B450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B450u;
label_14b450:
    // 0x14b450: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b454: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x14b454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b458: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b45c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x14b45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b460: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14b460u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14b464: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x14b464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x14b468: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b46c: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x14b46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b470: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14b470u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b474: 0x0  nop
    ctx->pc = 0x14b474u;
    // NOP
    // 0x14b478: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14b478u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14b47c: 0x0  nop
    ctx->pc = 0x14b47cu;
    // NOP
    // 0x14b480: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x14B480u;
    {
        const bool branch_taken_0x14b480 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14b480) {
            ctx->pc = 0x14B494u;
            return;
        }
    }
    ctx->pc = 0x14B488u;
    // 0x14b488: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14b488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b48c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b490: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x14b490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    ctx->pc = 0x14b494u;
}
