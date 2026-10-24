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

// Function: entry_0015e5d0
// Address: 0x15e5d0 - 0x15e5d8
void entry_0015e5d0_0x15e5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e5d0_0x15e5d0");
#endif

    ctx->pc = 0x15e5d0u;

    // 0x15e5d0: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x15E5D0u;
    SET_GPR_U32(ctx, 31, 0x15E5D8u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x15E5D0u, 0x15E5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E5D8u;
}
