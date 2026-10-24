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

// Function: entry_0011be28
// Address: 0x11be28 - 0x11be58
void entry_0011be28_0x11be28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011be28_0x11be28");
#endif

    ctx->pc = 0x11be28u;

    // 0x11be28: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x11be28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11be2c: 0x16c20035  bne         $s6, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x11BE2Cu;
    {
        const bool branch_taken_0x11be2c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x11BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE2Cu;
        // 0x11be30: 0x8fa6020c  lw          $a2, 0x20C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be2c) {
            ctx->pc = 0x11BF04u;
            return;
        }
    }
    ctx->pc = 0x11BE34u;
    // 0x11be34: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x11be34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x11be38: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x11be38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x11be3c: 0x858023  subu        $s0, $a0, $a1
    ctx->pc = 0x11be3cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x11be40: 0x1a000030  blez        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x11BE40u;
    {
        const bool branch_taken_0x11be40 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x11BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE40u;
        // 0x11be44: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be40) {
            ctx->pc = 0x11BF04u;
            return;
        }
    }
    ctx->pc = 0x11BE48u;
    // 0x11be48: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x11BE48u;
    {
        const bool branch_taken_0x11be48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE48u;
        // 0x11be4c: 0x3c16003b  lui         $s6, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be48) {
            ctx->pc = 0x11BEB0u;
            return;
        }
    }
    ctx->pc = 0x11BE50u;
    // 0x11be50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11BE50u;
    {
        const bool branch_taken_0x11be50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE50u;
        // 0x11be54: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be50) {
            ctx->pc = 0x11BE5Cu;
            return;
        }
    }
    ctx->pc = 0x11BE58u;
}
