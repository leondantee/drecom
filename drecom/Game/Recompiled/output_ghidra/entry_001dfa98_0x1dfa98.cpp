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

// Function: entry_001dfa98
// Address: 0x1dfa98 - 0x1dfab0
void entry_001dfa98_0x1dfa98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfa98_0x1dfa98");
#endif

    switch (ctx->pc) {
        case 0x1dfaa0u: goto label_1dfaa0;
        default: break;
    }

    ctx->pc = 0x1dfa98u;

    // 0x1dfa98: 0xc096268  jal         func_2589A0
    ctx->pc = 0x1DFA98u;
    SET_GPR_U32(ctx, 31, 0x1DFAA0u);
    ctx->pc = 0x2589A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2589A0u, 0x1DFA98u, 0x1DFAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFAA0u;
label_1dfaa0:
    // 0x1dfaa0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1dfaa0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfaa4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1dfaa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dfaa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFAA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFAB0u;
}
