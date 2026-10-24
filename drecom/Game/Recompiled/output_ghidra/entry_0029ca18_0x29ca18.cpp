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

// Function: entry_0029ca18
// Address: 0x29ca18 - 0x29ca30
void entry_0029ca18_0x29ca18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029ca18_0x29ca18");
#endif

    switch (ctx->pc) {
        case 0x29ca20u: goto label_29ca20;
        default: break;
    }

    ctx->pc = 0x29ca18u;

    // 0x29ca18: 0xc084934  jal         func_2124D0
    ctx->pc = 0x29CA18u;
    SET_GPR_U32(ctx, 31, 0x29CA20u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x29CA18u, 0x29CA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CA20u;
label_29ca20:
    // 0x29ca20: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x29ca20u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ca24: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x29ca24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29ca28: 0x3e00008  jr          $ra
    ctx->pc = 0x29CA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CA30u;
}
