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

// Function: entry_00114ba8
// Address: 0x114ba8 - 0x114bb0
void entry_00114ba8_0x114ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114ba8_0x114ba8");
#endif

    ctx->pc = 0x114ba8u;

    // 0x114ba8: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x114BA8u;
    SET_GPR_U32(ctx, 31, 0x114BB0u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x114BA8u, 0x114BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114BB0u;
}
