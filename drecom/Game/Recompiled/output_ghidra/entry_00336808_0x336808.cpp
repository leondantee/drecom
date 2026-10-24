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

// Function: entry_00336808
// Address: 0x336808 - 0x336810
void entry_00336808_0x336808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00336808_0x336808");
#endif

    ctx->pc = 0x336808u;

    // 0x336808: 0xc0cdd94  jal         func_337650
    ctx->pc = 0x336808u;
    SET_GPR_U32(ctx, 31, 0x336810u);
    ctx->pc = 0x337650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337650u, 0x336808u, 0x336810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336810u;
}
