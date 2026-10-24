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

// Function: entry_001ba574
// Address: 0x1ba574 - 0x1ba584
void entry_001ba574_0x1ba574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba574_0x1ba574");
#endif

    switch (ctx->pc) {
        case 0x1ba57cu: goto label_1ba57c;
        default: break;
    }

    ctx->pc = 0x1ba574u;

    // 0x1ba574: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1BA574u;
    SET_GPR_U32(ctx, 31, 0x1BA57Cu);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BA574u, 0x1BA57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA57Cu;
label_1ba57c:
    // 0x1ba57c: 0x100001b5  b           . + 4 + (0x1B5 << 2)
    ctx->pc = 0x1BA57Cu;
    {
        const bool branch_taken_0x1ba57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba57c) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BA584u;
}
