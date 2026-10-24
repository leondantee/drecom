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

// Function: entry_002de8c4
// Address: 0x2de8c4 - 0x2de8d8
void entry_002de8c4_0x2de8c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002de8c4_0x2de8c4");
#endif

    switch (ctx->pc) {
        case 0x2de8d0u: goto label_2de8d0;
        default: break;
    }

    ctx->pc = 0x2de8c4u;

    // 0x2de8c4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de8c8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DE8C8u;
    SET_GPR_U32(ctx, 31, 0x2DE8D0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DE8C8u, 0x2DE8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE8D0u;
label_2de8d0:
    // 0x2de8d0: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x2DE8D0u;
    {
        const bool branch_taken_0x2de8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de8d0) {
            ctx->pc = 0x2DEAF8u;
            return;
        }
    }
    ctx->pc = 0x2DE8D8u;
}
