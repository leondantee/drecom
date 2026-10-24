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

// Function: entry_001a1d98
// Address: 0x1a1d98 - 0x1a1dc4
void entry_001a1d98_0x1a1d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1d98_0x1a1d98");
#endif

    switch (ctx->pc) {
        case 0x1a1da0u: goto label_1a1da0;
        case 0x1a1dbcu: goto label_1a1dbc;
        default: break;
    }

    ctx->pc = 0x1a1d98u;

    // 0x1a1d98: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x1A1D98u;
    SET_GPR_U32(ctx, 31, 0x1A1DA0u);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x1A1D98u, 0x1A1DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1DA0u;
label_1a1da0:
    // 0x1a1da0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A1DA0u;
    {
        const bool branch_taken_0x1a1da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1da0) {
            ctx->pc = 0x1A1D8Cu;
            return;
        }
    }
    ctx->pc = 0x1A1DA8u;
    // 0x1a1da8: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1a1da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1a1dac: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1a1dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a1db0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a1db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1db4: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x1A1DB4u;
    SET_GPR_U32(ctx, 31, 0x1A1DBCu);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x1A1DB4u, 0x1A1DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1DBCu;
label_1a1dbc:
    // 0x1a1dbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1DBCu;
    {
        const bool branch_taken_0x1a1dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1dbc) {
            ctx->pc = 0x1A1DD0u;
            return;
        }
    }
    ctx->pc = 0x1A1DC4u;
}
