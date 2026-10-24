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

// Function: entry_00362e34
// Address: 0x362e34 - 0x362e84
void entry_00362e34_0x362e34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00362e34_0x362e34");
#endif

    ctx->pc = 0x362e34u;

    // 0x362e34: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x362e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x362e38: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x362e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362e3c: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x362e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x362e40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x362e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x362e44: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x362e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362e48: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x362e48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x362e4c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x362e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362e50: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x362e50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x362e54: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x362e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362e58: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x362e58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x362e5c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x362e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362e60: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x362e60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x362e64: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x362e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362e68: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x362e68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x362e6c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x362e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362e70: 0x8c83133c  lw          $v1, 0x133C($a0)
    ctx->pc = 0x362e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4924)));
    // 0x362e74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x362e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x362e78: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x362e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x362e7c: 0xac82133c  sw          $v0, 0x133C($a0)
    ctx->pc = 0x362e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4924), GPR_U32(ctx, 2));
    // 0x362e80: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x362e80u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x362e84u;
}
