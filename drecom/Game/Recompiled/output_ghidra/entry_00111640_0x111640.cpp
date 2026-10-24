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

// Function: entry_00111640
// Address: 0x111640 - 0x111664
void entry_00111640_0x111640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111640_0x111640");
#endif

    ctx->pc = 0x111640u;

label_111640:
    // 0x111640: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x111640u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x111644: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x111644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x111648: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x111648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11164c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11164cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x111650: 0x0  nop
    ctx->pc = 0x111650u;
    // NOP
    // 0x111654: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x111654u;
    {
        const bool branch_taken_0x111654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x111654) {
            ctx->pc = 0x111640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111640;
        }
    }
    ctx->pc = 0x11165Cu;
    // 0x11165c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11165Cu;
    {
        const bool branch_taken_0x11165c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11165Cu;
        // 0x111660: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11165c) {
            ctx->pc = 0x11166Cu;
            return;
        }
    }
    ctx->pc = 0x111664u;
}
