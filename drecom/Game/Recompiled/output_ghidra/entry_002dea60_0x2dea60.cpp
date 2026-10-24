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

// Function: entry_002dea60
// Address: 0x2dea60 - 0x2deab0
void entry_002dea60_0x2dea60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dea60_0x2dea60");
#endif

    ctx->pc = 0x2dea60u;

    // 0x2dea60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dea60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dea64: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2dea64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x2dea68: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2dea68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dea6c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x2dea6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2dea70: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DEA70u;
    {
        const bool branch_taken_0x2dea70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dea70) {
            ctx->pc = 0x2DEAB0u;
            return;
        }
    }
    ctx->pc = 0x2DEA78u;
    // 0x2dea78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dea78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dea7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dea80: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2dea80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dea84: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2dea84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dea88: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dea88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dea8c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2dea8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dea90: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dea90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dea94: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2dea94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dea98: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dea98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dea9c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2dea9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2deaa0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2deaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2deaa4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2deaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2deaa8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2DEAA8u;
    {
        const bool branch_taken_0x2deaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2deaa8) {
            ctx->pc = 0x2DEAF8u;
            return;
        }
    }
    ctx->pc = 0x2DEAB0u;
}
