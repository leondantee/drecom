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

// Function: entry_0010ab58
// Address: 0x10ab58 - 0x10ab5c
void entry_0010ab58_0x10ab58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ab58_0x10ab58");
#endif

    ctx->pc = 0x10ab58u;

    // 0x10ab58: 0xc042234  jal         func_1088D0
    ctx->pc = 0x10AB58u;
    SET_GPR_U32(ctx, 31, 0x10AB60u);
    ctx->pc = 0x1088D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1088D0u, 0x10AB58u, 0x10AB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB60u;
}
