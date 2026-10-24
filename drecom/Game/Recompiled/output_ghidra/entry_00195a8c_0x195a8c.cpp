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

// Function: entry_00195a8c
// Address: 0x195a8c - 0x195a98
void entry_00195a8c_0x195a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195a8c_0x195a8c");
#endif

    ctx->pc = 0x195a8cu;

    // 0x195a8c: 0xac230ae8  sw          $v1, 0xAE8($at)
    ctx->pc = 0x195a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2792), GPR_U32(ctx, 3));
    // 0x195a90: 0x3e00008  jr          $ra
    ctx->pc = 0x195A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195A98u;
}
