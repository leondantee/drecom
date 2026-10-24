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

// Function: entry_0033b060
// Address: 0x33b060 - 0x33b07c
void entry_0033b060_0x33b060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033b060_0x33b060");
#endif

    switch (ctx->pc) {
        case 0x33b074u: goto label_33b074;
        default: break;
    }

    ctx->pc = 0x33b060u;

    // 0x33b060: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33b060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33b064: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33b064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33b068: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33b068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33b06c: 0xc0cea54  jal         func_33A950
    ctx->pc = 0x33B06Cu;
    SET_GPR_U32(ctx, 31, 0x33B074u);
    ctx->pc = 0x33A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A950u, 0x33B06Cu, 0x33B074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B074u;
label_33b074:
    // 0x33b074: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x33B074u;
    {
        const bool branch_taken_0x33b074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b074) {
            ctx->pc = 0x33B0ACu;
            return;
        }
    }
    ctx->pc = 0x33B07Cu;
}
