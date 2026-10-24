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

// Function: entry_00216bc4
// Address: 0x216bc4 - 0x216be8
void entry_00216bc4_0x216bc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216bc4_0x216bc4");
#endif

    switch (ctx->pc) {
        case 0x216bccu: goto label_216bcc;
        default: break;
    }

    ctx->pc = 0x216bc4u;

    // 0x216bc4: 0xc0858c6  jal         func_216318
    ctx->pc = 0x216BC4u;
    SET_GPR_U32(ctx, 31, 0x216BCCu);
    ctx->pc = 0x216BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216BC4u;
    // 0x216bc8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216318u, 0x216BC4u, 0x216BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216BCCu;
label_216bcc:
    // 0x216bcc: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x216BCCu;
    {
        const bool branch_taken_0x216bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216BCCu;
        // 0x216bd0: 0x2402fff0  addiu       $v0, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216bcc) {
            ctx->pc = 0x216D18u;
            return;
        }
    }
    ctx->pc = 0x216BD4u;
    // 0x216bd4: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x216BD4u;
    {
        const bool branch_taken_0x216bd4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x216bd4) {
            ctx->pc = 0x216BE8u;
            return;
        }
    }
    ctx->pc = 0x216BDCu;
    // 0x216bdc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x216bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x216be0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x216BE0u;
    {
        const bool branch_taken_0x216be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216be0) {
            ctx->pc = 0x216BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216BE0u;
            // 0x216be4: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216BF8u;
            return;
        }
    }
    ctx->pc = 0x216BE8u;
}
