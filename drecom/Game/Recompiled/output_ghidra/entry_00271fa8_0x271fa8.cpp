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

// Function: entry_00271fa8
// Address: 0x271fa8 - 0x271fc0
void entry_00271fa8_0x271fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00271fa8_0x271fa8");
#endif

    switch (ctx->pc) {
        case 0x271fb0u: goto label_271fb0;
        default: break;
    }

    ctx->pc = 0x271fa8u;

    // 0x271fa8: 0xc09c7f0  jal         func_271FC0
    ctx->pc = 0x271FA8u;
    SET_GPR_U32(ctx, 31, 0x271FB0u);
    ctx->pc = 0x271FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271FC0u, 0x271FA8u, 0x271FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271FB0u;
label_271fb0:
    // 0x271fb0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x271fb0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271fb4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x271fb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x271fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x271FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271FC0u;
}
