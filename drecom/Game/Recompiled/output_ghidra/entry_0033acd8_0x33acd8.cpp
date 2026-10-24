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

// Function: entry_0033acd8
// Address: 0x33acd8 - 0x33acf4
void entry_0033acd8_0x33acd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033acd8_0x33acd8");
#endif

    switch (ctx->pc) {
        case 0x33acecu: goto label_33acec;
        default: break;
    }

    ctx->pc = 0x33acd8u;

    // 0x33acd8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33acdc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33acdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ace0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33ace0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33ace4: 0xc0cea54  jal         func_33A950
    ctx->pc = 0x33ACE4u;
    SET_GPR_U32(ctx, 31, 0x33ACECu);
    ctx->pc = 0x33A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A950u, 0x33ACE4u, 0x33ACECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ACECu;
label_33acec:
    // 0x33acec: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x33ACECu;
    {
        const bool branch_taken_0x33acec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33acec) {
            ctx->pc = 0x33B0ACu;
            return;
        }
    }
    ctx->pc = 0x33ACF4u;
}
