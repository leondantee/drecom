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

// Function: entry_0013b73c
// Address: 0x13b73c - 0x13b744
void entry_0013b73c_0x13b73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b73c_0x13b73c");
#endif

    ctx->pc = 0x13b73cu;

    // 0x13b73c: 0xc075bb4  jal         func_1D6ED0
    ctx->pc = 0x13B73Cu;
    SET_GPR_U32(ctx, 31, 0x13B744u);
    ctx->pc = 0x1D6ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6ED0u, 0x13B73Cu, 0x13B744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B744u;
}
