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

// Function: entry_001ab228
// Address: 0x1ab228 - 0x1ab230
void entry_001ab228_0x1ab228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab228_0x1ab228");
#endif

    ctx->pc = 0x1ab228u;

    // 0x1ab228: 0xc06ac94  jal         func_1AB250
    ctx->pc = 0x1AB228u;
    SET_GPR_U32(ctx, 31, 0x1AB230u);
    ctx->pc = 0x1AB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB250u, 0x1AB228u, 0x1AB230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB230u;
}
