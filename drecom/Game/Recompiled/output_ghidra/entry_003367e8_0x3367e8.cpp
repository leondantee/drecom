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

// Function: entry_003367e8
// Address: 0x3367e8 - 0x3367f8
void entry_003367e8_0x3367e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003367e8_0x3367e8");
#endif

    switch (ctx->pc) {
        case 0x3367f0u: goto label_3367f0;
        default: break;
    }

    ctx->pc = 0x3367e8u;

    // 0x3367e8: 0xc0cda0c  jal         func_336830
    ctx->pc = 0x3367E8u;
    SET_GPR_U32(ctx, 31, 0x3367F0u);
    ctx->pc = 0x336830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336830u, 0x3367E8u, 0x3367F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3367F0u;
label_3367f0:
    // 0x3367f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3367F0u;
    {
        const bool branch_taken_0x3367f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3367f0) {
            ctx->pc = 0x336810u;
            return;
        }
    }
    ctx->pc = 0x3367F8u;
}
