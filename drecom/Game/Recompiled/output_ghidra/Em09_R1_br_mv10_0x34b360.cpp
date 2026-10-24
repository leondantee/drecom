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

// Function: Em09_R1_br_mv10
// Address: 0x34b360 - 0x34b388
void Em09_R1_br_mv10_0x34b360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_br_mv10_0x34b360");
#endif

    switch (ctx->pc) {
        case 0x34b378u: goto label_34b378;
        default: break;
    }

    ctx->pc = 0x34b360u;

    // 0x34b360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34b360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34b364: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x34b364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x34b368: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x34b368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x34b36c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x34b36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34b370: 0xc0d4ed0  jal         func_353B40
    ctx->pc = 0x34B370u;
    SET_GPR_U32(ctx, 31, 0x34B378u);
    ctx->pc = 0x353B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353B40u, 0x34B370u, 0x34B378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B378u;
label_34b378:
    // 0x34b378: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x34b378u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b37c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x34b37cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34b380: 0x3e00008  jr          $ra
    ctx->pc = 0x34B380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B388u;
}
