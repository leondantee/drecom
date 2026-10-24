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

// Function: entry_0018ad60
// Address: 0x18ad60 - 0x18ad68
void entry_0018ad60_0x18ad60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ad60_0x18ad60");
#endif

    ctx->pc = 0x18ad60u;

    // 0x18ad60: 0xc05e964  jal         func_17A590
    ctx->pc = 0x18AD60u;
    SET_GPR_U32(ctx, 31, 0x18AD68u);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x18AD60u, 0x18AD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AD68u;
}
