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

// Function: entry_0017e19c
// Address: 0x17e19c - 0x17e1d4
void entry_0017e19c_0x17e19c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e19c_0x17e19c");
#endif

    switch (ctx->pc) {
        case 0x17e1ccu: goto label_17e1cc;
        default: break;
    }

    ctx->pc = 0x17e19cu;

    // 0x17e19c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e19cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e1a0: 0x8c230068  lw          $v1, 0x68($at)
    ctx->pc = 0x17e1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0068u));
    // 0x17e1a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e1a8: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17E1A8u;
    {
        const bool branch_taken_0x17e1a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17e1a8) {
            ctx->pc = 0x17E1D4u;
            return;
        }
    }
    ctx->pc = 0x17E1B0u;
    // 0x17e1b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e1b4: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x17e1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x17e1b8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x17e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x17e1bc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E1BCu;
    {
        const bool branch_taken_0x17e1bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17e1bc) {
            ctx->pc = 0x17E1D4u;
            return;
        }
    }
    ctx->pc = 0x17E1C4u;
    // 0x17e1c4: 0xc058ca0  jal         func_163280
    ctx->pc = 0x17E1C4u;
    SET_GPR_U32(ctx, 31, 0x17E1CCu);
    ctx->pc = 0x163280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163280u, 0x17E1C4u, 0x17E1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E1CCu;
label_17e1cc:
    // 0x17e1cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17E1CCu;
    {
        const bool branch_taken_0x17e1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e1cc) {
            ctx->pc = 0x17E1F8u;
            return;
        }
    }
    ctx->pc = 0x17E1D4u;
}
