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

// Function: entry_001a9e10
// Address: 0x1a9e10 - 0x1a9e18
void entry_001a9e10_0x1a9e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9e10_0x1a9e10");
#endif

    ctx->pc = 0x1a9e10u;

    // 0x1a9e10: 0xc0c9720  jal         func_325C80
    ctx->pc = 0x1A9E10u;
    SET_GPR_U32(ctx, 31, 0x1A9E18u);
    ctx->pc = 0x325C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325C80u, 0x1A9E10u, 0x1A9E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9E18u;
}
