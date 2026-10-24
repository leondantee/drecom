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

// Function: entry_002699f0
// Address: 0x2699f0 - 0x2699f8
void entry_002699f0_0x2699f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002699f0_0x2699f0");
#endif

    ctx->pc = 0x2699f0u;

    // 0x2699f0: 0xc0bb6c0  jal         func_2EDB00
    ctx->pc = 0x2699F0u;
    SET_GPR_U32(ctx, 31, 0x2699F8u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x2699F0u, 0x2699F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2699F8u;
}
