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

// Function: entry_001d96c8
// Address: 0x1d96c8 - 0x1d96e0
void entry_001d96c8_0x1d96c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d96c8_0x1d96c8");
#endif

    switch (ctx->pc) {
        case 0x1d96d0u: goto label_1d96d0;
        default: break;
    }

    ctx->pc = 0x1d96c8u;

    // 0x1d96c8: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x1D96C8u;
    SET_GPR_U32(ctx, 31, 0x1D96D0u);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x1D96C8u, 0x1D96D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D96D0u;
label_1d96d0:
    // 0x1d96d0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1d96d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d96d4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d96d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d96d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D96D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D96D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D96E0u;
}
