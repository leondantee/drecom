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

// Function: entry_00107e2c
// Address: 0x107e2c - 0x107e50
void entry_00107e2c_0x107e2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107e2c_0x107e2c");
#endif

    ctx->pc = 0x107e2cu;

    // 0x107e2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x107e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x107e30: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x107E30u;
    {
        const bool branch_taken_0x107e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x107E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E30u;
        // 0x107e34: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e30) {
            ctx->pc = 0x107E70u;
            return;
        }
    }
    ctx->pc = 0x107E38u;
    // 0x107e38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x107E38u;
    {
        const bool branch_taken_0x107e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E38u;
        // 0x107e3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e38) {
            ctx->pc = 0x107E50u;
            return;
        }
    }
    ctx->pc = 0x107E40u;
    // 0x107e40: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x107E40u;
    {
        const bool branch_taken_0x107e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x107E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E40u;
        // 0x107e44: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e40) {
            ctx->pc = 0x107E64u;
            return;
        }
    }
    ctx->pc = 0x107E48u;
    // 0x107e48: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x107E48u;
    {
        const bool branch_taken_0x107e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E48u;
        // 0x107e4c: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e48) {
            ctx->pc = 0x107E80u;
            return;
        }
    }
    ctx->pc = 0x107E50u;
}
