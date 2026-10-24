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

// Function: entry_001a2de8
// Address: 0x1a2de8 - 0x1a2df8
void entry_001a2de8_0x1a2de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2de8_0x1a2de8");
#endif

    switch (ctx->pc) {
        case 0x1a2df0u: goto label_1a2df0;
        default: break;
    }

    ctx->pc = 0x1a2de8u;

    // 0x1a2de8: 0xc06750c  jal         func_19D430
    ctx->pc = 0x1A2DE8u;
    SET_GPR_U32(ctx, 31, 0x1A2DF0u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x1A2DE8u, 0x1A2DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2DF0u;
label_1a2df0:
    // 0x1a2df0: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x1A2DF0u;
    {
        const bool branch_taken_0x1a2df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2df0) {
            ctx->pc = 0x1A2DCCu;
            return;
        }
    }
    ctx->pc = 0x1A2DF8u;
}
