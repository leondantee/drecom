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

// Function: Rain_env_set_ot3
// Address: 0x1ad6b0 - 0x1ad6e0
void Rain_env_set_ot3_0x1ad6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Rain_env_set_ot3_0x1ad6b0");
#endif

    switch (ctx->pc) {
        case 0x1ad6c8u: goto label_1ad6c8;
        default: break;
    }

    ctx->pc = 0x1ad6b0u;

    // 0x1ad6b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ad6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ad6b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1ad6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1ad6b8: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x1ad6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x1ad6bc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1ad6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ad6c0: 0xc06b5b8  jal         func_1AD6E0
    ctx->pc = 0x1AD6C0u;
    SET_GPR_U32(ctx, 31, 0x1AD6C8u);
    ctx->pc = 0x1AD6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD6E0u, 0x1AD6C0u, 0x1AD6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD6C8u;
label_1ad6c8:
    // 0x1ad6c8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1ad6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1ad6cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ad6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ad6d0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1ad6d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad6d4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ad6d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ad6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD6E0u;
}
