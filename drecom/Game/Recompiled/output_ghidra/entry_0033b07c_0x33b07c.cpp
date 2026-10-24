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

// Function: entry_0033b07c
// Address: 0x33b07c - 0x33b098
void entry_0033b07c_0x33b07c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033b07c_0x33b07c");
#endif

    switch (ctx->pc) {
        case 0x33b090u: goto label_33b090;
        default: break;
    }

    ctx->pc = 0x33b07cu;

    // 0x33b07c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33b080: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33b080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33b084: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33b084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33b088: 0xc0cea54  jal         func_33A950
    ctx->pc = 0x33B088u;
    SET_GPR_U32(ctx, 31, 0x33B090u);
    ctx->pc = 0x33A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A950u, 0x33B088u, 0x33B090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B090u;
label_33b090:
    // 0x33b090: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33B090u;
    {
        const bool branch_taken_0x33b090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b090) {
            ctx->pc = 0x33B0ACu;
            return;
        }
    }
    ctx->pc = 0x33B098u;
}
