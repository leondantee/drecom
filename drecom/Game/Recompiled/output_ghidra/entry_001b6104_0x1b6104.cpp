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

// Function: entry_001b6104
// Address: 0x1b6104 - 0x1b6114
void entry_001b6104_0x1b6104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6104_0x1b6104");
#endif

    switch (ctx->pc) {
        case 0x1b610cu: goto label_1b610c;
        default: break;
    }

    ctx->pc = 0x1b6104u;

    // 0x1b6104: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1B6104u;
    SET_GPR_U32(ctx, 31, 0x1B610Cu);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1B6104u, 0x1B610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B610Cu;
label_1b610c:
    // 0x1b610c: 0x100002f4  b           . + 4 + (0x2F4 << 2)
    ctx->pc = 0x1B610Cu;
    {
        const bool branch_taken_0x1b610c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b610c) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B6114u;
}
