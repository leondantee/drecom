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

// Function: entry_0035a2c0
// Address: 0x35a2c0 - 0x35a314
void entry_0035a2c0_0x35a2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035a2c0_0x35a2c0");
#endif

    ctx->pc = 0x35a2c0u;

    // 0x35a2c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35a2c4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a2c8: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x35a2c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x35a2cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35a2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35a2d0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a2d4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x35a2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x35a2d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35a2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a2dc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a2e0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x35a2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x35a2e4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a2e8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x35a2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a2ec: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a2f0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x35a2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a2f4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a2f8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x35a2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x35a2fc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x35a2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a300: 0x8c83133c  lw          $v1, 0x133C($a0)
    ctx->pc = 0x35a300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4924)));
    // 0x35a304: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35a304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35a308: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35a308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35a30c: 0xac82133c  sw          $v0, 0x133C($a0)
    ctx->pc = 0x35a30cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4924), GPR_U32(ctx, 2));
    // 0x35a310: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x35a310u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x35a314u;
}
