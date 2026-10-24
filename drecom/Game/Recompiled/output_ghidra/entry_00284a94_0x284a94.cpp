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

// Function: entry_00284a94
// Address: 0x284a94 - 0x284aa0
void entry_00284a94_0x284a94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00284a94_0x284a94");
#endif

    ctx->pc = 0x284a94u;

    // 0x284a94: 0xac231a48  sw          $v1, 0x1A48($at)
    ctx->pc = 0x284a94u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6728), GPR_U32(ctx, 3));
    // 0x284a98: 0x3e00008  jr          $ra
    ctx->pc = 0x284A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284AA0u;
}
