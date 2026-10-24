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

// Function: entry_0027c400
// Address: 0x27c400 - 0x27c43c
void entry_0027c400_0x27c400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027c400_0x27c400");
#endif

    switch (ctx->pc) {
        case 0x27c410u: goto label_27c410;
        case 0x27c418u: goto label_27c418;
        default: break;
    }

    ctx->pc = 0x27c400u;

    // 0x27c400: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x27c400u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x27c404: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x27c404u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x27c408: 0xc09620c  jal         func_258830
    ctx->pc = 0x27C408u;
    SET_GPR_U32(ctx, 31, 0x27C410u);
    ctx->pc = 0x258830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258830u, 0x27C408u, 0x27C410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C410u;
label_27c410:
    // 0x27c410: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27C410u;
    SET_GPR_U32(ctx, 31, 0x27C418u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27C410u, 0x27C418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C418u;
label_27c418:
    // 0x27c418: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x27c418u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27c41c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27c41cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27c420: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27c420u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27c424: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27c424u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27c428: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27c428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27c42c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27c42cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27c430: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x27c430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x27c434: 0x3e00008  jr          $ra
    ctx->pc = 0x27C434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C43Cu;
}
