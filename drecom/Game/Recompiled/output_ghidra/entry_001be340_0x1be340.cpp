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

// Function: entry_001be340
// Address: 0x1be340 - 0x1be350
void entry_001be340_0x1be340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be340_0x1be340");
#endif

    switch (ctx->pc) {
        case 0x1be348u: goto label_1be348;
        default: break;
    }

    ctx->pc = 0x1be340u;

    // 0x1be340: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1BE340u;
    SET_GPR_U32(ctx, 31, 0x1BE348u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BE340u, 0x1BE348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE348u;
label_1be348:
    // 0x1be348: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x1BE348u;
    {
        const bool branch_taken_0x1be348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be348) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BE350u;
}
