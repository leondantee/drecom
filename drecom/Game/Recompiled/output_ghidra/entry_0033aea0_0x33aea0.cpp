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

// Function: entry_0033aea0
// Address: 0x33aea0 - 0x33aec0
void entry_0033aea0_0x33aea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033aea0_0x33aea0");
#endif

    switch (ctx->pc) {
        case 0x33aeb8u: goto label_33aeb8;
        default: break;
    }

    ctx->pc = 0x33aea0u;

    // 0x33aea0: 0x24020035  addiu       $v0, $zero, 0x35
    ctx->pc = 0x33aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x33aea4: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33AEA4u;
    {
        const bool branch_taken_0x33aea4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33aea4) {
            ctx->pc = 0x33AEC0u;
            return;
        }
    }
    ctx->pc = 0x33AEACu;
    // 0x33aeac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x33aeacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33aeb0: 0xc0ce984  jal         func_33A610
    ctx->pc = 0x33AEB0u;
    SET_GPR_U32(ctx, 31, 0x33AEB8u);
    ctx->pc = 0x33A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A610u, 0x33AEB0u, 0x33AEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AEB8u;
label_33aeb8:
    // 0x33aeb8: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x33AEB8u;
    {
        const bool branch_taken_0x33aeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33aeb8) {
            ctx->pc = 0x33B0ACu;
            return;
        }
    }
    ctx->pc = 0x33AEC0u;
}
