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

// Function: entry_0033a290
// Address: 0x33a290 - 0x33a2a8
void entry_0033a290_0x33a290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a290_0x33a290");
#endif

    switch (ctx->pc) {
        case 0x33a298u: goto label_33a298;
        default: break;
    }

    ctx->pc = 0x33a290u;

    // 0x33a290: 0xc084a94  jal         func_212A50
    ctx->pc = 0x33A290u;
    SET_GPR_U32(ctx, 31, 0x33A298u);
    ctx->pc = 0x212A50u;
    {
        ctx->pc = 0x33A298u;
        ps2_syscalls::iSignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33A298u) { return; }
    ctx->pc = 0x33A298u;
label_33a298:
    // 0x33a298: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x33a298u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a29c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x33a29cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33a2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x33A2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A2A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A2A8u;
}
