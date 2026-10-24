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

// Function: entry_00183ac8
// Address: 0x183ac8 - 0x183ae0
void entry_00183ac8_0x183ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183ac8_0x183ac8");
#endif

    switch (ctx->pc) {
        case 0x183ad0u: goto label_183ad0;
        default: break;
    }

    ctx->pc = 0x183ac8u;

    // 0x183ac8: 0xc058f1c  jal         func_163C70
    ctx->pc = 0x183AC8u;
    SET_GPR_U32(ctx, 31, 0x183AD0u);
    ctx->pc = 0x163C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C70u, 0x183AC8u, 0x183AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183AD0u;
label_183ad0:
    // 0x183ad0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x183ad0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183ad4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x183ad4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x183AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183AE0u;
}
