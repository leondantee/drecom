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

// Function: entry_00216168
// Address: 0x216168 - 0x21618c
void entry_00216168_0x216168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216168_0x216168");
#endif

    ctx->pc = 0x216168u;

    // 0x216168: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x216168u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21616c: 0x1a800007  blez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x21616Cu;
    {
        const bool branch_taken_0x21616c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x216170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21616Cu;
        // 0x216170: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21616c) {
            ctx->pc = 0x21618Cu;
            return;
        }
    }
    ctx->pc = 0x216174u;
    // 0x216174: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x216174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x216178: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x216178u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21617c: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x21617cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x216180: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x216180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x216184: 0xafb40008  sw          $s4, 0x8($sp)
    ctx->pc = 0x216184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 20));
    // 0x216188: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x216188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x21618cu;
}
