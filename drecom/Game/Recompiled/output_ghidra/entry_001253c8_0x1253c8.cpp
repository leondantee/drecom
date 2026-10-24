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

// Function: entry_001253c8
// Address: 0x1253c8 - 0x1253d0
void entry_001253c8_0x1253c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001253c8_0x1253c8");
#endif

    ctx->pc = 0x1253c8u;

    // 0x1253c8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1253C8u;
    SET_GPR_U32(ctx, 31, 0x1253D0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1253C8u, 0x1253D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1253D0u;
}
