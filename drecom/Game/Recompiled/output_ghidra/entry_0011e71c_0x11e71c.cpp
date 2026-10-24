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

// Function: entry_0011e71c
// Address: 0x11e71c - 0x11e73c
void entry_0011e71c_0x11e71c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e71c_0x11e71c");
#endif

    ctx->pc = 0x11e71cu;

    // 0x11e71c: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x11e71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x11e720: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x11E720u;
    {
        const bool branch_taken_0x11e720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e720) {
            ctx->pc = 0x11E724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E720u;
            // 0x11e724: 0x240707ff  addiu       $a3, $zero, 0x7FF (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E77Cu;
            return;
        }
    }
    ctx->pc = 0x11E728u;
    // 0x11e728: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x11e728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x11e72c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E72Cu;
    {
        const bool branch_taken_0x11e72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e72c) {
            ctx->pc = 0x11E73Cu;
            return;
        }
    }
    ctx->pc = 0x11E734u;
    // 0x11e734: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x11E734u;
    {
        const bool branch_taken_0x11e734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E734u;
        // 0x11e738: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e734) {
            ctx->pc = 0x11E7C0u;
            return;
        }
    }
    ctx->pc = 0x11E73Cu;
}
