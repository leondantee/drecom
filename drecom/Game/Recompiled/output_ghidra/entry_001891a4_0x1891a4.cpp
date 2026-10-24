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

// Function: entry_001891a4
// Address: 0x1891a4 - 0x1891b0
void entry_001891a4_0x1891a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001891a4_0x1891a4");
#endif

    ctx->pc = 0x1891a4u;

    // 0x1891a4: 0xac202504  sw          $zero, 0x2504($at)
    ctx->pc = 0x1891a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9476), GPR_U32(ctx, 0));
    // 0x1891a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1891A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1891A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1891B0u;
}
