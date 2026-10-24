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

// Function: entry_001121a0
// Address: 0x1121a0 - 0x1121c0
void entry_001121a0_0x1121a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001121a0_0x1121a0");
#endif

    ctx->pc = 0x1121a0u;

    // 0x1121a0: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1121A0u;
    {
        const bool branch_taken_0x1121a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1121A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121A0u;
        // 0x1121a4: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1121a0) {
            ctx->pc = 0x1121E4u;
            return;
        }
    }
    ctx->pc = 0x1121A8u;
    // 0x1121a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1121A8u;
    {
        const bool branch_taken_0x1121a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1121ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121A8u;
        // 0x1121ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1121a8) {
            ctx->pc = 0x1121C0u;
            return;
        }
    }
    ctx->pc = 0x1121B0u;
    // 0x1121b0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1121B0u;
    {
        const bool branch_taken_0x1121b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1121B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121B0u;
        // 0x1121b4: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1121b0) {
            ctx->pc = 0x1121D8u;
            return;
        }
    }
    ctx->pc = 0x1121B8u;
    // 0x1121b8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1121B8u;
    {
        const bool branch_taken_0x1121b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1121b8) {
            ctx->pc = 0x112218u;
            return;
        }
    }
    ctx->pc = 0x1121C0u;
}
