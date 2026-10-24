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

// Function: entry_00216da8
// Address: 0x216da8 - 0x216dc4
void entry_00216da8_0x216da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216da8_0x216da8");
#endif

    switch (ctx->pc) {
        case 0x216dbcu: goto label_216dbc;
        default: break;
    }

    ctx->pc = 0x216da8u;

    // 0x216da8: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x216DA8u;
    {
        const bool branch_taken_0x216da8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x216da8) {
            ctx->pc = 0x216DC4u;
            return;
        }
    }
    ctx->pc = 0x216DB0u;
    // 0x216db0: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x216db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x216db4: 0xc0858c6  jal         func_216318
    ctx->pc = 0x216DB4u;
    SET_GPR_U32(ctx, 31, 0x216DBCu);
    ctx->pc = 0x216DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216DB4u;
    // 0x216db8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216318u, 0x216DB4u, 0x216DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216DBCu;
label_216dbc:
    // 0x216dbc: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x216DBCu;
    {
        const bool branch_taken_0x216dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DBCu;
        // 0x216dc0: 0x2402fff0  addiu       $v0, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216dbc) {
            ctx->pc = 0x216F60u;
            return;
        }
    }
    ctx->pc = 0x216DC4u;
}
