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

// Function: entry_001a2d64
// Address: 0x1a2d64 - 0x1a2d7c
void entry_001a2d64_0x1a2d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2d64_0x1a2d64");
#endif

    switch (ctx->pc) {
        case 0x1a2d6cu: goto label_1a2d6c;
        default: break;
    }

    ctx->pc = 0x1a2d64u;

    // 0x1a2d64: 0xc067498  jal         func_19D260
    ctx->pc = 0x1A2D64u;
    SET_GPR_U32(ctx, 31, 0x1A2D6Cu);
    ctx->pc = 0x19D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D260u, 0x1A2D64u, 0x1A2D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2D6Cu;
label_1a2d6c:
    // 0x1a2d6c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1a2d6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2d70: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a2d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a2d74: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2D7Cu;
}
