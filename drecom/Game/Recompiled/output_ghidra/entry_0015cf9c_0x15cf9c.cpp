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

// Function: entry_0015cf9c
// Address: 0x15cf9c - 0x15cfb4
void entry_0015cf9c_0x15cf9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cf9c_0x15cf9c");
#endif

    switch (ctx->pc) {
        case 0x15cfacu: goto label_15cfac;
        default: break;
    }

    ctx->pc = 0x15cf9cu;

    // 0x15cf9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15cf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15cfa0: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x15cfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x15cfa4: 0xc0624f8  jal         func_1893E0
    ctx->pc = 0x15CFA4u;
    SET_GPR_U32(ctx, 31, 0x15CFACu);
    ctx->pc = 0x1893E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1893E0u, 0x15CFA4u, 0x15CFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CFACu;
label_15cfac:
    // 0x15cfac: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x15CFACu;
    {
        const bool branch_taken_0x15cfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cfac) {
            ctx->pc = 0x15D08Cu;
            return;
        }
    }
    ctx->pc = 0x15CFB4u;
}
