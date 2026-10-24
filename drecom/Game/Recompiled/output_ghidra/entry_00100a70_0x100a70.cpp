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

// Function: entry_00100a70
// Address: 0x100a70 - 0x100a8c
void entry_00100a70_0x100a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100a70_0x100a70");
#endif

    ctx->pc = 0x100a70u;

label_100a70:
    // 0x100a70: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x100a70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x100a74: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x100A74u;
    {
        const bool branch_taken_0x100a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A74u;
        // 0x100a78: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a74) {
            ctx->pc = 0x100B1Cu;
            return;
        }
    }
    ctx->pc = 0x100A7Cu;
    // 0x100a7c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x100a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x100a80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x100a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x100a84: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x100A84u;
    {
        const bool branch_taken_0x100a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A84u;
        // 0x100a88: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a84) {
            ctx->pc = 0x100A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100a70;
        }
    }
    ctx->pc = 0x100A8Cu;
}
