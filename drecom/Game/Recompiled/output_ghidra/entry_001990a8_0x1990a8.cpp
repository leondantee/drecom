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

// Function: entry_001990a8
// Address: 0x1990a8 - 0x1990b0
void entry_001990a8_0x1990a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001990a8_0x1990a8");
#endif

    ctx->pc = 0x1990a8u;

    // 0x1990a8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x1990A8u;
    SET_GPR_U32(ctx, 31, 0x1990B0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x1990A8u, 0x1990B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1990B0u;
}
