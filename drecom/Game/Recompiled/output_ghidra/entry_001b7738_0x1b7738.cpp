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

// Function: entry_001b7738
// Address: 0x1b7738 - 0x1b7748
void entry_001b7738_0x1b7738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7738_0x1b7738");
#endif

    switch (ctx->pc) {
        case 0x1b7740u: goto label_1b7740;
        default: break;
    }

    ctx->pc = 0x1b7738u;

    // 0x1b7738: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1B7738u;
    SET_GPR_U32(ctx, 31, 0x1B7740u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1B7738u, 0x1B7740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7740u;
label_1b7740:
    // 0x1b7740: 0x100002fd  b           . + 4 + (0x2FD << 2)
    ctx->pc = 0x1B7740u;
    {
        const bool branch_taken_0x1b7740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7740) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B7748u;
}
