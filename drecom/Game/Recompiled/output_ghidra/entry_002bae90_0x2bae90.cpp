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

// Function: entry_002bae90
// Address: 0x2bae90 - 0x2baea8
void entry_002bae90_0x2bae90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002bae90_0x2bae90");
#endif

    switch (ctx->pc) {
        case 0x2bae98u: goto label_2bae98;
        default: break;
    }

    ctx->pc = 0x2bae90u;

    // 0x2bae90: 0xc0aea58  jal         func_2BA960
    ctx->pc = 0x2BAE90u;
    SET_GPR_U32(ctx, 31, 0x2BAE98u);
    ctx->pc = 0x2BA960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA960u, 0x2BAE90u, 0x2BAE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAE98u;
label_2bae98:
    // 0x2bae98: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bae98u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bae9c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bae9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2baea0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAEA8u;
}
