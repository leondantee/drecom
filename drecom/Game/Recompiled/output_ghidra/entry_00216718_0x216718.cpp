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

// Function: entry_00216718
// Address: 0x216718 - 0x21673c
void entry_00216718_0x216718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216718_0x216718");
#endif

    switch (ctx->pc) {
        case 0x216720u: goto label_216720;
        default: break;
    }

    ctx->pc = 0x216718u;

    // 0x216718: 0xc0858c6  jal         func_216318
    ctx->pc = 0x216718u;
    SET_GPR_U32(ctx, 31, 0x216720u);
    ctx->pc = 0x21671Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216718u;
    // 0x21671c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216318u, 0x216718u, 0x216720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216720u;
label_216720:
    // 0x216720: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x216720u;
    {
        const bool branch_taken_0x216720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216720u;
        // 0x216724: 0x2402fff0  addiu       $v0, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216720) {
            ctx->pc = 0x2167B0u;
            return;
        }
    }
    ctx->pc = 0x216728u;
    // 0x216728: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x216728u;
    {
        const bool branch_taken_0x216728 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x216728) {
            ctx->pc = 0x21673Cu;
            return;
        }
    }
    ctx->pc = 0x216730u;
    // 0x216730: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x216730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x216734: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x216734u;
    {
        const bool branch_taken_0x216734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216734) {
            ctx->pc = 0x216738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216734u;
            // 0x216738: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21674Cu;
            return;
        }
    }
    ctx->pc = 0x21673Cu;
}
