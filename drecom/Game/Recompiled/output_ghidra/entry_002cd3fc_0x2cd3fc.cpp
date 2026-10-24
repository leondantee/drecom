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

// Function: entry_002cd3fc
// Address: 0x2cd3fc - 0x2cd410
void entry_002cd3fc_0x2cd3fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cd3fc_0x2cd3fc");
#endif

    switch (ctx->pc) {
        case 0x2cd408u: goto label_2cd408;
        default: break;
    }

    ctx->pc = 0x2cd3fcu;

    // 0x2cd3fc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd400: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x2CD400u;
    SET_GPR_U32(ctx, 31, 0x2CD408u);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x2CD400u, 0x2CD408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD408u;
label_2cd408:
    // 0x2cd408: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2CD408u;
    {
        const bool branch_taken_0x2cd408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd408) {
            ctx->pc = 0x2CD560u;
            return;
        }
    }
    ctx->pc = 0x2CD410u;
}
