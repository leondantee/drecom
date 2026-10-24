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

// Function: entry_0033ade0
// Address: 0x33ade0 - 0x33adfc
void entry_0033ade0_0x33ade0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033ade0_0x33ade0");
#endif

    switch (ctx->pc) {
        case 0x33adf4u: goto label_33adf4;
        default: break;
    }

    ctx->pc = 0x33ade0u;

    // 0x33ade0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33ade4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33ade4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ade8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x33ade8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33adec: 0xc0cea54  jal         func_33A950
    ctx->pc = 0x33ADECu;
    SET_GPR_U32(ctx, 31, 0x33ADF4u);
    ctx->pc = 0x33A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A950u, 0x33ADECu, 0x33ADF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ADF4u;
label_33adf4:
    // 0x33adf4: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x33ADF4u;
    {
        const bool branch_taken_0x33adf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33adf4) {
            ctx->pc = 0x33B0ACu;
            return;
        }
    }
    ctx->pc = 0x33ADFCu;
}
