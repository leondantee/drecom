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

// Function: entry_00105b2c
// Address: 0x105b2c - 0x105b58
void entry_00105b2c_0x105b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105b2c_0x105b2c");
#endif

    ctx->pc = 0x105b2cu;

    // 0x105b2c: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x105b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x105b30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105b34: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x105B34u;
    {
        const bool branch_taken_0x105b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B34u;
        // 0x105b38: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b34) {
            ctx->pc = 0x105B60u;
            return;
        }
    }
    ctx->pc = 0x105B3Cu;
    // 0x105b3c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x105b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x105b40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105b44: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x105b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x105b48: 0x1060ffe7  beqz        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x105B48u;
    {
        const bool branch_taken_0x105b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B48u;
        // 0x105b4c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b48) {
            ctx->pc = 0x105AE8u;
            return;
        }
    }
    ctx->pc = 0x105B50u;
    // 0x105b50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x105B50u;
    {
        const bool branch_taken_0x105b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x105b50) {
            ctx->pc = 0x105B64u;
            return;
        }
    }
    ctx->pc = 0x105B58u;
}
