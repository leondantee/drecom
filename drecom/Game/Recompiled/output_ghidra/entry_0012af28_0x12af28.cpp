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

// Function: entry_0012af28
// Address: 0x12af28 - 0x12af30
void entry_0012af28_0x12af28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012af28_0x12af28");
#endif

    ctx->pc = 0x12af28u;

    // 0x12af28: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12AF28u;
    SET_GPR_U32(ctx, 31, 0x12AF30u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12AF28u, 0x12AF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF30u;
}
