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

// Function: entry_0027f160
// Address: 0x27f160 - 0x27f168
void entry_0027f160_0x27f160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027f160_0x27f160");
#endif

    ctx->pc = 0x27f160u;

    // 0x27f160: 0xc0a12a8  jal         func_284AA0
    ctx->pc = 0x27F160u;
    SET_GPR_U32(ctx, 31, 0x27F168u);
    ctx->pc = 0x284AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284AA0u, 0x27F160u, 0x27F168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F168u;
}
