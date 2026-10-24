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

// Function: entry_001b604c
// Address: 0x1b604c - 0x1b605c
void entry_001b604c_0x1b604c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b604c_0x1b604c");
#endif

    switch (ctx->pc) {
        case 0x1b6054u: goto label_1b6054;
        default: break;
    }

    ctx->pc = 0x1b604cu;

    // 0x1b604c: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1B604Cu;
    SET_GPR_U32(ctx, 31, 0x1B6054u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1B604Cu, 0x1B6054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6054u;
label_1b6054:
    // 0x1b6054: 0x10000322  b           . + 4 + (0x322 << 2)
    ctx->pc = 0x1B6054u;
    {
        const bool branch_taken_0x1b6054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6054) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B605Cu;
}
