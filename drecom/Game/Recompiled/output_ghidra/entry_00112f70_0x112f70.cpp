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

// Function: entry_00112f70
// Address: 0x112f70 - 0x112f94
void entry_00112f70_0x112f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112f70_0x112f70");
#endif

    ctx->pc = 0x112f70u;

label_112f70:
    // 0x112f70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x112f70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x112f74: 0x1101023  subu        $v0, $t0, $s0
    ctx->pc = 0x112f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x112f78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x112f7c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x112f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x112f80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x112f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112f84: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x112F84u;
    {
        const bool branch_taken_0x112f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x112f84) {
            ctx->pc = 0x112F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112f70;
        }
    }
    ctx->pc = 0x112F8Cu;
    // 0x112f8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x112F8Cu;
    {
        const bool branch_taken_0x112f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F8Cu;
        // 0x112f90: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f8c) {
            ctx->pc = 0x112F9Cu;
            return;
        }
    }
    ctx->pc = 0x112F94u;
}
