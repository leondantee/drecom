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

// Function: entry_0019f108
// Address: 0x19f108 - 0x19f120
void entry_0019f108_0x19f108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f108_0x19f108");
#endif

    switch (ctx->pc) {
        case 0x19f110u: goto label_19f110;
        default: break;
    }

    ctx->pc = 0x19f108u;

    // 0x19f108: 0xc0ce418  jal         func_339060
    ctx->pc = 0x19F108u;
    SET_GPR_U32(ctx, 31, 0x19F110u);
    ctx->pc = 0x339060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339060u, 0x19F108u, 0x19F110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F110u;
label_19f110:
    // 0x19f110: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x19f110u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f114: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x19f114u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19f118: 0x3e00008  jr          $ra
    ctx->pc = 0x19F118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F120u;
}
