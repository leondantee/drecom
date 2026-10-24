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

// Function: entry_00284bf0
// Address: 0x284bf0 - 0x284c00
void entry_00284bf0_0x284bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00284bf0_0x284bf0");
#endif

    switch (ctx->pc) {
        case 0x284bf8u: goto label_284bf8;
        default: break;
    }

    ctx->pc = 0x284bf0u;

    // 0x284bf0: 0xc0a1328  jal         func_284CA0
    ctx->pc = 0x284BF0u;
    SET_GPR_U32(ctx, 31, 0x284BF8u);
    ctx->pc = 0x284CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284CA0u, 0x284BF0u, 0x284BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284BF8u;
label_284bf8:
    // 0x284bf8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x284BF8u;
    {
        const bool branch_taken_0x284bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284bf8) {
            ctx->pc = 0x284C68u;
            return;
        }
    }
    ctx->pc = 0x284C00u;
}
