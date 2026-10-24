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

// Function: entry_00110754
// Address: 0x110754 - 0x11077c
void entry_00110754_0x110754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110754_0x110754");
#endif

    ctx->pc = 0x110754u;

    // 0x110754: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x110754u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x110758: 0x26235280  addiu       $v1, $s1, 0x5280
    ctx->pc = 0x110758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 21120));
    // 0x11075c: 0x26025700  addiu       $v0, $s0, 0x5700
    ctx->pc = 0x11075cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 22272));
    // 0x110760: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x110760u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x110764: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x110764u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x110768: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x110768u;
    {
        const bool branch_taken_0x110768 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x11076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110768u;
        // 0x11076c: 0xac62001c  sw          $v0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110768) {
            ctx->pc = 0x11077Cu;
            return;
        }
    }
    ctx->pc = 0x110770u;
    // 0x110770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x110770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110774: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x110774u;
    {
        const bool branch_taken_0x110774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110774u;
        // 0x110778: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110774) {
            ctx->pc = 0x110780u;
            return;
        }
    }
    ctx->pc = 0x11077Cu;
}
