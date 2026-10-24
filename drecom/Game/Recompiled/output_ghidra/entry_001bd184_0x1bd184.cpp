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

// Function: entry_001bd184
// Address: 0x1bd184 - 0x1bd18c
void entry_001bd184_0x1bd184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd184_0x1bd184");
#endif

    ctx->pc = 0x1bd184u;

    // 0x1bd184: 0xc0c5244  jal         func_314910
    ctx->pc = 0x1BD184u;
    SET_GPR_U32(ctx, 31, 0x1BD18Cu);
    ctx->pc = 0x314910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314910u, 0x1BD184u, 0x1BD18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD18Cu;
}
