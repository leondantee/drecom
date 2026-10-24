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

// Function: entry_003134b0
// Address: 0x3134b0 - 0x3134b8
void entry_003134b0_0x3134b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003134b0_0x3134b0");
#endif

    ctx->pc = 0x3134b0u;

    // 0x3134b0: 0xc0c4988  jal         func_312620
    ctx->pc = 0x3134B0u;
    SET_GPR_U32(ctx, 31, 0x3134B8u);
    ctx->pc = 0x312620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312620u, 0x3134B0u, 0x3134B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3134B8u;
}
