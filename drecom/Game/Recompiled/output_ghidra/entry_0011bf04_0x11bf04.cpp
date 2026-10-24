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

// Function: entry_0011bf04
// Address: 0x11bf04 - 0x11bf20
void entry_0011bf04_0x11bf04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bf04_0x11bf04");
#endif

    ctx->pc = 0x11bf04u;

    // 0x11bf04: 0xd58023  subu        $s0, $a2, $s5
    ctx->pc = 0x11bf04u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x11bf08: 0x1a00002f  blez        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x11BF08u;
    {
        const bool branch_taken_0x11bf08 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x11BF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF08u;
        // 0x11bf0c: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf08) {
            ctx->pc = 0x11BFC8u;
            return;
        }
    }
    ctx->pc = 0x11BF10u;
    // 0x11bf10: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x11BF10u;
    {
        const bool branch_taken_0x11bf10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF10u;
        // 0x11bf14: 0x3c16003b  lui         $s6, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf10) {
            ctx->pc = 0x11BF78u;
            return;
        }
    }
    ctx->pc = 0x11BF18u;
    // 0x11bf18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11BF18u;
    {
        const bool branch_taken_0x11bf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF18u;
        // 0x11bf1c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf18) {
            ctx->pc = 0x11BF24u;
            return;
        }
    }
    ctx->pc = 0x11BF20u;
}
