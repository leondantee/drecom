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

// Function: entry_001af518
// Address: 0x1af518 - 0x1af520
void entry_001af518_0x1af518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af518_0x1af518");
#endif

    ctx->pc = 0x1af518u;

    // 0x1af518: 0xc06bd58  jal         func_1AF560
    ctx->pc = 0x1AF518u;
    SET_GPR_U32(ctx, 31, 0x1AF520u);
    ctx->pc = 0x1AF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF560u, 0x1AF518u, 0x1AF520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF520u;
}
