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

// Function: CdMovieExit
// Address: 0x1d9580 - 0x1d95c0
void CdMovieExit_0x1d9580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CdMovieExit_0x1d9580");
#endif

    switch (ctx->pc) {
        case 0x1d95a4u: goto label_1d95a4;
        default: break;
    }

    ctx->pc = 0x1d9580u;

    // 0x1d9580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d9580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d9584: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1d9584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1d9588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d9588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d958c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1d958cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d9590: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d9590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d9594: 0x2445c520  addiu       $a1, $v0, -0x3AE0
    ctx->pc = 0x1d9594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952224));
    // 0x1d9598: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d9598u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d959c: 0xc0762e8  jal         func_1D8BA0
    ctx->pc = 0x1D959Cu;
    SET_GPR_U32(ctx, 31, 0x1D95A4u);
    ctx->pc = 0x1D8BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BA0u, 0x1D959Cu, 0x1D95A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D95A4u;
label_1d95a4:
    // 0x1d95a4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1d95a4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d95a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d95a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d95ac: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1d95acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d95b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d95b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d95b4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d95b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d95b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D95B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D95B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D95C0u;
}
