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

// Function: entry_001be114
// Address: 0x1be114 - 0x1be124
void entry_001be114_0x1be114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be114_0x1be114");
#endif

    switch (ctx->pc) {
        case 0x1be11cu: goto label_1be11c;
        default: break;
    }

    ctx->pc = 0x1be114u;

    // 0x1be114: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1BE114u;
    SET_GPR_U32(ctx, 31, 0x1BE11Cu);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BE114u, 0x1BE11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE11Cu;
label_1be11c:
    // 0x1be11c: 0x1000017b  b           . + 4 + (0x17B << 2)
    ctx->pc = 0x1BE11Cu;
    {
        const bool branch_taken_0x1be11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be11c) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BE124u;
}
