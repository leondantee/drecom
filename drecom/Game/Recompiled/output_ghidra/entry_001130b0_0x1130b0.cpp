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

// Function: entry_001130b0
// Address: 0x1130b0 - 0x1130d8
void entry_001130b0_0x1130b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001130b0_0x1130b0");
#endif

    ctx->pc = 0x1130b0u;

label_1130b0:
    // 0x1130b0: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x1130b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x1130b4: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x1130b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x1130b8: 0x2463ffe8  addiu       $v1, $v1, -0x18
    ctx->pc = 0x1130b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x1130bc: 0xafa30248  sw          $v1, 0x248($sp)
    ctx->pc = 0x1130bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 3));
    // 0x1130c0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1130c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1130c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1130c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1130c8: 0x1080fff9  beqz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1130C8u;
    {
        const bool branch_taken_0x1130c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1130CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130C8u;
        // 0x1130cc: 0x8fa30248  lw          $v1, 0x248($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1130c8) {
            ctx->pc = 0x1130B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1130b0;
        }
    }
    ctx->pc = 0x1130D0u;
    // 0x1130d0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1130D0u;
    {
        const bool branch_taken_0x1130d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1130d0) {
            ctx->pc = 0x1131A0u;
            return;
        }
    }
    ctx->pc = 0x1130D8u;
}
