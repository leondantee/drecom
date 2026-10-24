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

// Function: entry_0014baec
// Address: 0x14baec - 0x14bb40
void entry_0014baec_0x14baec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014baec_0x14baec");
#endif

    ctx->pc = 0x14baecu;

    // 0x14baec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14baecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14baf0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14baf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14baf4: 0x106000aa  beqz        $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x14BAF4u;
    {
        const bool branch_taken_0x14baf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14baf4) {
            ctx->pc = 0x14BDA0u;
            return;
        }
    }
    ctx->pc = 0x14BAFCu;
    // 0x14bafc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14bafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14bb00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bb04: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x14bb04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x14bb08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bb0c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14bb0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14bb10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bb14: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x14bb14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14bb18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bb1c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14bb1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x14bb20: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x14bb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14bb24: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bb28: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14bb28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x14bb2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14bb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14bb30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bb34: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14bb34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x14bb38: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x14BB38u;
    {
        const bool branch_taken_0x14bb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bb38) {
            ctx->pc = 0x14BDA0u;
            return;
        }
    }
    ctx->pc = 0x14BB40u;
}
