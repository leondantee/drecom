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

// Function: entry_001baa64
// Address: 0x1baa64 - 0x1baa6c
void entry_001baa64_0x1baa64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001baa64_0x1baa64");
#endif

    ctx->pc = 0x1baa64u;

    // 0x1baa64: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1BAA64u;
    SET_GPR_U32(ctx, 31, 0x1BAA6Cu);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BAA64u, 0x1BAA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAA6Cu;
}
