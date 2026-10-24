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

// Function: entry_00362990
// Address: 0x362990 - 0x3629e4
void entry_00362990_0x362990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00362990_0x362990");
#endif

    ctx->pc = 0x362990u;

    // 0x362990: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x362990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x362994: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x362994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362998: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x362998u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x36299c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36299cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3629a0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3629a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3629a4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3629a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3629a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3629a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3629ac: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3629acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3629b0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x3629b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3629b4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3629b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3629b8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x3629b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3629bc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3629bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3629c0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x3629c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3629c4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3629c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3629c8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3629c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3629cc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x3629ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3629d0: 0x8c83133c  lw          $v1, 0x133C($a0)
    ctx->pc = 0x3629d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4924)));
    // 0x3629d4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3629d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3629d8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3629d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3629dc: 0xac82133c  sw          $v0, 0x133C($a0)
    ctx->pc = 0x3629dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4924), GPR_U32(ctx, 2));
    // 0x3629e0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x3629e0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x3629e4u;
}
