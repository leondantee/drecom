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

// Function: entry_002e7070
// Address: 0x2e7070 - 0x2e7084
void entry_002e7070_0x2e7070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7070_0x2e7070");
#endif

    switch (ctx->pc) {
        case 0x2e707cu: goto label_2e707c;
        default: break;
    }

    ctx->pc = 0x2e7070u;

    // 0x2e7070: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e7070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e7074: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E7074u;
    SET_GPR_U32(ctx, 31, 0x2E707Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E7074u, 0x2E707Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E707Cu;
label_2e707c:
    // 0x2e707c: 0x100001f7  b           . + 4 + (0x1F7 << 2)
    ctx->pc = 0x2E707Cu;
    {
        const bool branch_taken_0x2e707c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e707c) {
            ctx->pc = 0x2E785Cu;
            return;
        }
    }
    ctx->pc = 0x2E7084u;
}
