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

// Function: entry_0030c6ec
// Address: 0x30c6ec - 0x30c73c
void entry_0030c6ec_0x30c6ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030c6ec_0x30c6ec");
#endif

    ctx->pc = 0x30c6ecu;

    // 0x30c6ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c6f0: 0x8c641338  lw          $a0, 0x1338($v1)
    ctx->pc = 0x30c6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x30c6f4: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x30c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x30c6f8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30c6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30c6fc: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x30C6FCu;
    {
        const bool branch_taken_0x30c6fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c6fc) {
            ctx->pc = 0x30C73Cu;
            return;
        }
    }
    ctx->pc = 0x30C704u;
    // 0x30c704: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30c704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c708: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c70c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30c70cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30c710: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x30c710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30c714: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c718: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30c718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30c71c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c720: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30c720u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c724: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c728: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30c728u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c72c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c730: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30c730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30c734: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x30C734u;
    {
        const bool branch_taken_0x30c734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c734) {
            ctx->pc = 0x30CAA0u;
            return;
        }
    }
    ctx->pc = 0x30C73Cu;
}
