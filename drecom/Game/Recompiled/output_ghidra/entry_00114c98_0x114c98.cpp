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

// Function: entry_00114c98
// Address: 0x114c98 - 0x114c9c
void entry_00114c98_0x114c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114c98_0x114c98");
#endif

    ctx->pc = 0x114c98u;

    // 0x114c98: 0xc044a0c  jal         func_112830
    ctx->pc = 0x114C98u;
    SET_GPR_U32(ctx, 31, 0x114CA0u);
    ctx->pc = 0x112830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112830u, 0x114C98u, 0x114CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114CA0u;
}
