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

// Function: entry_003325f0
// Address: 0x3325f0 - 0x332600
void entry_003325f0_0x3325f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003325f0_0x3325f0");
#endif

    switch (ctx->pc) {
        case 0x3325f8u: goto label_3325f8;
        default: break;
    }

    ctx->pc = 0x3325f0u;

    // 0x3325f0: 0xc0cc9a0  jal         func_332680
    ctx->pc = 0x3325F0u;
    SET_GPR_U32(ctx, 31, 0x3325F8u);
    ctx->pc = 0x332680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332680u, 0x3325F0u, 0x3325F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3325F8u;
label_3325f8:
    // 0x3325f8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3325F8u;
    {
        const bool branch_taken_0x3325f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3325f8) {
            ctx->pc = 0x332648u;
            return;
        }
    }
    ctx->pc = 0x332600u;
}
