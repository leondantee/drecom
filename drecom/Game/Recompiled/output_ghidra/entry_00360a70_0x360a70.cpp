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

// Function: entry_00360a70
// Address: 0x360a70 - 0x360a88
void entry_00360a70_0x360a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00360a70_0x360a70");
#endif

    switch (ctx->pc) {
        case 0x360a78u: goto label_360a78;
        default: break;
    }

    ctx->pc = 0x360a70u;

    // 0x360a70: 0xc0d83ec  jal         func_360FB0
    ctx->pc = 0x360A70u;
    SET_GPR_U32(ctx, 31, 0x360A78u);
    ctx->pc = 0x360FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360FB0u, 0x360A70u, 0x360A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360A78u;
label_360a78:
    // 0x360a78: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x360a78u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360a7c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x360a7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x360a80: 0x3e00008  jr          $ra
    ctx->pc = 0x360A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360A88u;
}
