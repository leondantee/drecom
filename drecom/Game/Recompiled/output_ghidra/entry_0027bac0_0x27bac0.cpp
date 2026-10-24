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

// Function: entry_0027bac0
// Address: 0x27bac0 - 0x27bac8
void entry_0027bac0_0x27bac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027bac0_0x27bac0");
#endif

    ctx->pc = 0x27bac0u;

    // 0x27bac0: 0xc0848cc  jal         func_212330
    ctx->pc = 0x27BAC0u;
    SET_GPR_U32(ctx, 31, 0x27BAC8u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x27BAC0u, 0x27BAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BAC8u;
}
