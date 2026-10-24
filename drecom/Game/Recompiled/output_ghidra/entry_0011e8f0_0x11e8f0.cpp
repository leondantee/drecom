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

// Function: entry_0011e8f0
// Address: 0x11e8f0 - 0x11e90c
void entry_0011e8f0_0x11e8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e8f0_0x11e8f0");
#endif

    ctx->pc = 0x11e8f0u;

    // 0x11e8f0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E8F0u;
    {
        const bool branch_taken_0x11e8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E8F0u;
        // 0x11e8f4: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e8f0) {
            ctx->pc = 0x11E918u;
            return;
        }
    }
    ctx->pc = 0x11E8F8u;
    // 0x11e8f8: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x11E8F8u;
    {
        const bool branch_taken_0x11e8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e8f8) {
            ctx->pc = 0x11E8D4u;
            return;
        }
    }
    ctx->pc = 0x11E900u;
    // 0x11e900: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x11e900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11e904: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x11e904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x11e908: 0x1043fff2  beq         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x11E908u;
    {
        const bool branch_taken_0x11e908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x11e908) {
            ctx->pc = 0x11E8D4u;
            return;
        }
    }
    ctx->pc = 0x11E910u;
}
