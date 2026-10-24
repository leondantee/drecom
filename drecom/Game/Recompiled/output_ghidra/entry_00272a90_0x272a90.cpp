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

// Function: entry_00272a90
// Address: 0x272a90 - 0x272ab0
void entry_00272a90_0x272a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00272a90_0x272a90");
#endif

    switch (ctx->pc) {
        case 0x272a98u: goto label_272a98;
        default: break;
    }

    ctx->pc = 0x272a90u;

    // 0x272a90: 0xc084934  jal         func_2124D0
    ctx->pc = 0x272A90u;
    SET_GPR_U32(ctx, 31, 0x272A98u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x272A90u, 0x272A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A98u;
label_272a98:
    // 0x272a98: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x272a98u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x272a9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x272a9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272aa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x272aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272aa4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x272aa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x272aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x272AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272AB0u;
}
