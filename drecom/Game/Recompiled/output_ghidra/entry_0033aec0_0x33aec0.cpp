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

// Function: entry_0033aec0
// Address: 0x33aec0 - 0x33aedc
void entry_0033aec0_0x33aec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033aec0_0x33aec0");
#endif

    switch (ctx->pc) {
        case 0x33aed4u: goto label_33aed4;
        default: break;
    }

    ctx->pc = 0x33aec0u;

    // 0x33aec0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33aec4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33aec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33aec8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33aec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33aecc: 0xc0cea54  jal         func_33A950
    ctx->pc = 0x33AECCu;
    SET_GPR_U32(ctx, 31, 0x33AED4u);
    ctx->pc = 0x33A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A950u, 0x33AECCu, 0x33AED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AED4u;
label_33aed4:
    // 0x33aed4: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x33AED4u;
    {
        const bool branch_taken_0x33aed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33aed4) {
            ctx->pc = 0x33B0ACu;
            return;
        }
    }
    ctx->pc = 0x33AEDCu;
}
