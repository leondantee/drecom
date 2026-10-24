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

// Function: entry_001b8d3c
// Address: 0x1b8d3c - 0x1b8d4c
void entry_001b8d3c_0x1b8d3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8d3c_0x1b8d3c");
#endif

    switch (ctx->pc) {
        case 0x1b8d44u: goto label_1b8d44;
        default: break;
    }

    ctx->pc = 0x1b8d3cu;

    // 0x1b8d3c: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1B8D3Cu;
    SET_GPR_U32(ctx, 31, 0x1B8D44u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1B8D3Cu, 0x1B8D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8D44u;
label_1b8d44:
    // 0x1b8d44: 0x10000291  b           . + 4 + (0x291 << 2)
    ctx->pc = 0x1B8D44u;
    {
        const bool branch_taken_0x1b8d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8d44) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B8D4Cu;
}
