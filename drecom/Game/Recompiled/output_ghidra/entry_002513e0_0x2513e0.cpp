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

// Function: entry_002513e0
// Address: 0x2513e0 - 0x2513e8
void entry_002513e0_0x2513e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002513e0_0x2513e0");
#endif

    ctx->pc = 0x2513e0u;

    // 0x2513e0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2513E0u;
    SET_GPR_U32(ctx, 31, 0x2513E8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2513E0u, 0x2513E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2513E8u;
}
