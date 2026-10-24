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

// Function: entry_00118668
// Address: 0x118668 - 0x118680
void entry_00118668_0x118668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118668_0x118668");
#endif

    ctx->pc = 0x118668u;

label_118668:
    // 0x118668: 0x31420003  andi        $v0, $t2, 0x3
    ctx->pc = 0x118668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x11866c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x11866Cu;
    {
        const bool branch_taken_0x11866c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11866Cu;
        // 0x118670: 0x2529fff8  addiu       $t1, $t1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11866c) {
            ctx->pc = 0x1186CCu;
            return;
        }
    }
    ctx->pc = 0x118674u;
    // 0x118674: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x118674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x118678: 0x1049fffb  beq         $v0, $t1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x118678u;
    {
        const bool branch_taken_0x118678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x11867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118678u;
        // 0x11867c: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118678) {
            ctx->pc = 0x118668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118668;
        }
    }
    ctx->pc = 0x118680u;
}
