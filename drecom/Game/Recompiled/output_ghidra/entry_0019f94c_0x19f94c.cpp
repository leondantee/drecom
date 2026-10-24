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

// Function: entry_0019f94c
// Address: 0x19f94c - 0x19f954
void entry_0019f94c_0x19f94c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f94c_0x19f94c");
#endif

    ctx->pc = 0x19f94cu;

    // 0x19f94c: 0xc0ce6b4  jal         func_339AD0
    ctx->pc = 0x19F94Cu;
    SET_GPR_U32(ctx, 31, 0x19F954u);
    ctx->pc = 0x339AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339AD0u, 0x19F94Cu, 0x19F954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F954u;
}
