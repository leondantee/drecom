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

// Function: entry_001c99a0
// Address: 0x1c99a0 - 0x1c99a8
void entry_001c99a0_0x1c99a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c99a0_0x1c99a0");
#endif

    ctx->pc = 0x1c99a0u;

    // 0x1c99a0: 0xc05774c  jal         func_15DD30
    ctx->pc = 0x1C99A0u;
    SET_GPR_U32(ctx, 31, 0x1C99A8u);
    ctx->pc = 0x15DD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DD30u, 0x1C99A0u, 0x1C99A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99A8u;
}
