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

// Function: entry_0035e920
// Address: 0x35e920 - 0x35e928
void entry_0035e920_0x35e920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035e920_0x35e920");
#endif

    ctx->pc = 0x35e920u;

    // 0x35e920: 0xc0d7ad4  jal         func_35EB50
    ctx->pc = 0x35E920u;
    SET_GPR_U32(ctx, 31, 0x35E928u);
    ctx->pc = 0x35EB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EB50u, 0x35E920u, 0x35E928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E928u;
}
