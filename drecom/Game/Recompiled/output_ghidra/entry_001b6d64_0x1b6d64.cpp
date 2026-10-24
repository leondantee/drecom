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

// Function: entry_001b6d64
// Address: 0x1b6d64 - 0x1b6d6c
void entry_001b6d64_0x1b6d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6d64_0x1b6d64");
#endif

    ctx->pc = 0x1b6d64u;

    // 0x1b6d64: 0xc0c5244  jal         func_314910
    ctx->pc = 0x1B6D64u;
    SET_GPR_U32(ctx, 31, 0x1B6D6Cu);
    ctx->pc = 0x314910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314910u, 0x1B6D64u, 0x1B6D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D6Cu;
}
