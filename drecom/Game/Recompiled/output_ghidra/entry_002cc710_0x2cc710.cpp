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

// Function: entry_002cc710
// Address: 0x2cc710 - 0x2cc724
void entry_002cc710_0x2cc710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cc710_0x2cc710");
#endif

    switch (ctx->pc) {
        case 0x2cc71cu: goto label_2cc71c;
        default: break;
    }

    ctx->pc = 0x2cc710u;

    // 0x2cc710: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc714: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x2CC714u;
    SET_GPR_U32(ctx, 31, 0x2CC71Cu);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x2CC714u, 0x2CC71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC71Cu;
label_2cc71c:
    // 0x2cc71c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2CC71Cu;
    {
        const bool branch_taken_0x2cc71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc71c) {
            ctx->pc = 0x2CC870u;
            return;
        }
    }
    ctx->pc = 0x2CC724u;
}
