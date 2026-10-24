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

// Function: entry_0014ac8c
// Address: 0x14ac8c - 0x14ace0
void entry_0014ac8c_0x14ac8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ac8c_0x14ac8c");
#endif

    ctx->pc = 0x14ac8cu;

    // 0x14ac8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ac90: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14ac90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14ac94: 0x106000aa  beqz        $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x14AC94u;
    {
        const bool branch_taken_0x14ac94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ac94) {
            ctx->pc = 0x14AF40u;
            return;
        }
    }
    ctx->pc = 0x14AC9Cu;
    // 0x14ac9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14ac9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14aca0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14aca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14aca4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x14aca4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x14aca8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14acac: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14acacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14acb0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14acb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14acb4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x14acb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14acb8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14acb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14acbc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14acbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x14acc0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x14acc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14acc4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14acc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14acc8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14acc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x14accc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14acccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14acd0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14acd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14acd4: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14acd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x14acd8: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x14ACD8u;
    {
        const bool branch_taken_0x14acd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14acd8) {
            ctx->pc = 0x14AF40u;
            return;
        }
    }
    ctx->pc = 0x14ACE0u;
}
