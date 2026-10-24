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

// Function: Om09_R1_mv01
// Address: 0x37c8c0 - 0x37c938
void Om09_R1_mv01_0x37c8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om09_R1_mv01_0x37c8c0");
#endif

    switch (ctx->pc) {
        case 0x37c8e0u: goto label_37c8e0;
        case 0x37c8f8u: goto label_37c8f8;
        case 0x37c910u: goto label_37c910;
        case 0x37c928u: goto label_37c928;
        default: break;
    }

    ctx->pc = 0x37c8c0u;

    // 0x37c8c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37c8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37c8c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x37c8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x37c8c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x37c8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x37c8cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37c8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c8d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x37c8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c8d4: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x37c8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x37c8d8: 0xc079140  jal         func_1E4500
    ctx->pc = 0x37C8D8u;
    SET_GPR_U32(ctx, 31, 0x37C8E0u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x37C8D8u, 0x37C8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C8E0u;
label_37c8e0:
    // 0x37c8e0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37c8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c8e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x37c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c8e8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x37c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x37c8ec: 0x24450090  addiu       $a1, $v0, 0x90
    ctx->pc = 0x37c8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x37c8f0: 0xc079140  jal         func_1E4500
    ctx->pc = 0x37C8F0u;
    SET_GPR_U32(ctx, 31, 0x37C8F8u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x37C8F0u, 0x37C8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C8F8u;
label_37c8f8:
    // 0x37c8f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37c8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c8fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x37c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c900: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x37c900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x37c904: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x37c904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x37c908: 0xc079140  jal         func_1E4500
    ctx->pc = 0x37C908u;
    SET_GPR_U32(ctx, 31, 0x37C910u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x37C908u, 0x37C910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C910u;
label_37c910:
    // 0x37c910: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37c910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c914: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x37c914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c918: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x37c918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x37c91c: 0x244501b0  addiu       $a1, $v0, 0x1B0
    ctx->pc = 0x37c91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    // 0x37c920: 0xc079140  jal         func_1E4500
    ctx->pc = 0x37C920u;
    SET_GPR_U32(ctx, 31, 0x37C928u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x37C920u, 0x37C928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C928u;
label_37c928:
    // 0x37c928: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x37c928u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c92c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x37c92cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x37c930: 0x3e00008  jr          $ra
    ctx->pc = 0x37C930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C938u;
}
