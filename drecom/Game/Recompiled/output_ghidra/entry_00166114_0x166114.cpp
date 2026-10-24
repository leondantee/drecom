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

// Function: entry_00166114
// Address: 0x166114 - 0x16611c
void entry_00166114_0x166114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166114_0x166114");
#endif

    ctx->pc = 0x166114u;

    // 0x166114: 0xc059c3c  jal         func_1670F0
    ctx->pc = 0x166114u;
    SET_GPR_U32(ctx, 31, 0x16611Cu);
    ctx->pc = 0x1670F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1670F0u, 0x166114u, 0x16611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16611Cu;
}
