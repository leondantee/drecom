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

// Function: entry_00213a58
// Address: 0x213a58 - 0x213a6c
void entry_00213a58_0x213a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213a58_0x213a58");
#endif

    ctx->pc = 0x213a58u;

    // 0x213a58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x213A58u;
    {
        const bool branch_taken_0x213a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A58u;
        // 0x213a5c: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a58) {
            ctx->pc = 0x213A6Cu;
            return;
        }
    }
    ctx->pc = 0x213A60u;
    // 0x213a60: 0x8c43aac8  lw          $v1, -0x5538($v0)
    ctx->pc = 0x213a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945480)));
    // 0x213a64: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x213A64u;
    {
        const bool branch_taken_0x213a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x213A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A64u;
        // 0x213a68: 0x3c050062  lui         $a1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a64) {
            ctx->pc = 0x213A74u;
            return;
        }
    }
    ctx->pc = 0x213A6Cu;
}
