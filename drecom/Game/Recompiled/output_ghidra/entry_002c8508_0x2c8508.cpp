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

// Function: entry_002c8508
// Address: 0x2c8508 - 0x2c8568
void entry_002c8508_0x2c8508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c8508_0x2c8508");
#endif

    ctx->pc = 0x2c8508u;

    // 0x2c8508: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c8508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c850c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c850cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c8510: 0x80630039  lb          $v1, 0x39($v1)
    ctx->pc = 0x2c8510u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x2c8514: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2c8514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2c8518: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2c8518u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2c851c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C851Cu;
    {
        const bool branch_taken_0x2c851c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c851c) {
            ctx->pc = 0x2C8568u;
            return;
        }
    }
    ctx->pc = 0x2C8524u;
    // 0x2c8524: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c8524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c8528: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c8528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c852c: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x2c852cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2c8530: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C8530u;
    {
        const bool branch_taken_0x2c8530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8530) {
            ctx->pc = 0x2C8568u;
            return;
        }
    }
    ctx->pc = 0x2C8538u;
    // 0x2c8538: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c8538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c853c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c853cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c8540: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c8540u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c8544: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2c8544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c8548: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c8548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c854c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c854cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c8550: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c8550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c8554: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c8554u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c8558: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c8558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c855c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c855cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c8560: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c8560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c8564: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c8564u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2c8568u;
}
