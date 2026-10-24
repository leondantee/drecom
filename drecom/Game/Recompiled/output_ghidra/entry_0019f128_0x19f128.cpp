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

// Function: entry_0019f128
// Address: 0x19f128 - 0x19f140
void entry_0019f128_0x19f128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f128_0x19f128");
#endif

    switch (ctx->pc) {
        case 0x19f130u: goto label_19f130;
        default: break;
    }

    ctx->pc = 0x19f128u;

    // 0x19f128: 0xc0ce7f4  jal         func_339FD0
    ctx->pc = 0x19F128u;
    SET_GPR_U32(ctx, 31, 0x19F130u);
    ctx->pc = 0x339FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339FD0u, 0x19F128u, 0x19F130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F130u;
label_19f130:
    // 0x19f130: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x19f130u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f134: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x19f134u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19f138: 0x3e00008  jr          $ra
    ctx->pc = 0x19F138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F140u;
}
