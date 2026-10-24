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

// Function: SdrGetState
// Address: 0x33a3f0 - 0x33a44c
void SdrGetState_0x33a3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SdrGetState_0x33a3f0");
#endif

    switch (ctx->pc) {
        case 0x33a414u: goto label_33a414;
        case 0x33a438u: goto label_33a438;
        default: break;
    }

    ctx->pc = 0x33a3f0u;

    // 0x33a3f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33a3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33a3f4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x33a3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x33a3f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33a3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33a3fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x33a3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x33a400: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x33a400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x33a404: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x33a404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33a408: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x33a408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33a40c: 0xc0ce8ac  jal         func_33A2B0
    ctx->pc = 0x33A40Cu;
    SET_GPR_U32(ctx, 31, 0x33A414u);
    ctx->pc = 0x33A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A2B0u, 0x33A40Cu, 0x33A414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A414u;
label_33a414:
    // 0x33a414: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x33a414u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33a418: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33A418u;
    {
        const bool branch_taken_0x33a418 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x33a418) {
            ctx->pc = 0x33A42Cu;
            goto label_33a42c;
        }
    }
    ctx->pc = 0x33A420u;
    // 0x33a420: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x33a420u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x33a424: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33A424u;
    {
        const bool branch_taken_0x33a424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a424) {
            ctx->pc = 0x33A438u;
            goto label_33a438;
        }
    }
    ctx->pc = 0x33A42Cu;
label_33a42c:
    // 0x33a42c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x33a42cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33a430: 0xc0ce8dc  jal         func_33A370
    ctx->pc = 0x33A430u;
    SET_GPR_U32(ctx, 31, 0x33A438u);
    ctx->pc = 0x33A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A370u, 0x33A430u, 0x33A438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A438u;
label_33a438:
    // 0x33a438: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x33a438u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33a43c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33a43cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a440: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x33a440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33a444: 0x3e00008  jr          $ra
    ctx->pc = 0x33A444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A44Cu;
}
