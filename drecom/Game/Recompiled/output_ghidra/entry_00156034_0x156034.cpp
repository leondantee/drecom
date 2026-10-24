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

// Function: entry_00156034
// Address: 0x156034 - 0x156044
void entry_00156034_0x156034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156034_0x156034");
#endif

    switch (ctx->pc) {
        case 0x15603cu: goto label_15603c;
        default: break;
    }

    ctx->pc = 0x156034u;

    // 0x156034: 0xc0558b8  jal         func_1562E0
    ctx->pc = 0x156034u;
    SET_GPR_U32(ctx, 31, 0x15603Cu);
    ctx->pc = 0x1562E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1562E0u, 0x156034u, 0x15603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15603Cu;
label_15603c:
    // 0x15603c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15603Cu;
    {
        const bool branch_taken_0x15603c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15603c) {
            ctx->pc = 0x15604Cu;
            return;
        }
    }
    ctx->pc = 0x156044u;
}
