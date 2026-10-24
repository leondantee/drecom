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

// Function: entry_00254dfc
// Address: 0x254dfc - 0x254e08
void entry_00254dfc_0x254dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00254dfc_0x254dfc");
#endif

    ctx->pc = 0x254dfcu;

    // 0x254dfc: 0xac23b83c  sw          $v1, -0x47C4($at)
    ctx->pc = 0x254dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948924), GPR_U32(ctx, 3));
    // 0x254e00: 0x3e00008  jr          $ra
    ctx->pc = 0x254E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254E08u;
}
