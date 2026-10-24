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

// Function: entry_001bb84c
// Address: 0x1bb84c - 0x1bb85c
void entry_001bb84c_0x1bb84c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb84c_0x1bb84c");
#endif

    switch (ctx->pc) {
        case 0x1bb854u: goto label_1bb854;
        default: break;
    }

    ctx->pc = 0x1bb84cu;

    // 0x1bb84c: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1BB84Cu;
    SET_GPR_U32(ctx, 31, 0x1BB854u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BB84Cu, 0x1BB854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB854u;
label_1bb854:
    // 0x1bb854: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x1BB854u;
    {
        const bool branch_taken_0x1bb854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb854) {
            ctx->pc = 0x1BBB10u;
            return;
        }
    }
    ctx->pc = 0x1BB85Cu;
}
