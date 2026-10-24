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

// Function: entry_0015b3a8
// Address: 0x15b3a8 - 0x15b3b0
void entry_0015b3a8_0x15b3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b3a8_0x15b3a8");
#endif

    ctx->pc = 0x15b3a8u;

    // 0x15b3a8: 0xc096234  jal         func_2588D0
    ctx->pc = 0x15B3A8u;
    SET_GPR_U32(ctx, 31, 0x15B3B0u);
    ctx->pc = 0x2588D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2588D0u, 0x15B3A8u, 0x15B3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B3B0u;
}
