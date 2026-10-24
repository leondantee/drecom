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

// Function: entry_0033acbc
// Address: 0x33acbc - 0x33acd8
void entry_0033acbc_0x33acbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033acbc_0x33acbc");
#endif

    switch (ctx->pc) {
        case 0x33acd0u: goto label_33acd0;
        default: break;
    }

    ctx->pc = 0x33acbcu;

    // 0x33acbc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33acc0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33acc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33acc4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33acc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33acc8: 0xc0cea54  jal         func_33A950
    ctx->pc = 0x33ACC8u;
    SET_GPR_U32(ctx, 31, 0x33ACD0u);
    ctx->pc = 0x33A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A950u, 0x33ACC8u, 0x33ACD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ACD0u;
label_33acd0:
    // 0x33acd0: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x33ACD0u;
    {
        const bool branch_taken_0x33acd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33acd0) {
            ctx->pc = 0x33B0ACu;
            return;
        }
    }
    ctx->pc = 0x33ACD8u;
}
