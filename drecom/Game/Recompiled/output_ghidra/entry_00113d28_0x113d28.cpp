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

// Function: entry_00113d28
// Address: 0x113d28 - 0x113d4c
void entry_00113d28_0x113d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113d28_0x113d28");
#endif

    ctx->pc = 0x113d28u;

label_113d28:
    // 0x113d28: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x113d28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x113d2c: 0x2881023  subu        $v0, $s4, $t0
    ctx->pc = 0x113d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x113d30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x113d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x113d34: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x113d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x113d38: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x113d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113d3c: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x113D3Cu;
    {
        const bool branch_taken_0x113d3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x113d3c) {
            ctx->pc = 0x113D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113d28;
        }
    }
    ctx->pc = 0x113D44u;
    // 0x113d44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x113D44u;
    {
        const bool branch_taken_0x113d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D44u;
        // 0x113d48: 0x2082021  addu        $a0, $s0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d44) {
            ctx->pc = 0x113D54u;
            return;
        }
    }
    ctx->pc = 0x113D4Cu;
}
