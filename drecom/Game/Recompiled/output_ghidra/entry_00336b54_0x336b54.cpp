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

// Function: entry_00336b54
// Address: 0x336b54 - 0x336b64
void entry_00336b54_0x336b54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00336b54_0x336b54");
#endif

    switch (ctx->pc) {
        case 0x336b5cu: goto label_336b5c;
        default: break;
    }

    ctx->pc = 0x336b54u;

    // 0x336b54: 0xc0a1328  jal         func_284CA0
    ctx->pc = 0x336B54u;
    SET_GPR_U32(ctx, 31, 0x336B5Cu);
    ctx->pc = 0x284CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284CA0u, 0x336B54u, 0x336B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336B5Cu;
label_336b5c:
    // 0x336b5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x336B5Cu;
    {
        const bool branch_taken_0x336b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336b5c) {
            ctx->pc = 0x336B6Cu;
            return;
        }
    }
    ctx->pc = 0x336B64u;
}
