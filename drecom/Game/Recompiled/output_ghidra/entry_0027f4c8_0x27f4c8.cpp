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

// Function: entry_0027f4c8
// Address: 0x27f4c8 - 0x27f4d0
void entry_0027f4c8_0x27f4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027f4c8_0x27f4c8");
#endif

    ctx->pc = 0x27f4c8u;

    // 0x27f4c8: 0xc09ffa8  jal         func_27FEA0
    ctx->pc = 0x27F4C8u;
    SET_GPR_U32(ctx, 31, 0x27F4D0u);
    ctx->pc = 0x27FEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEA0u, 0x27F4C8u, 0x27F4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F4D0u;
}
