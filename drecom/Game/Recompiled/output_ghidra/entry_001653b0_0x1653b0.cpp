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

// Function: entry_001653b0
// Address: 0x1653b0 - 0x1653f0
void entry_001653b0_0x1653b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001653b0_0x1653b0");
#endif

    ctx->pc = 0x1653b0u;

    // 0x1653b0: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x1653b0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1653b4: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x1653b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1653b8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1653b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1653bc: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1653bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1653c0: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x1653c0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1653c4: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x1653c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1653c8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1653c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1653cc: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1653ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1653d0: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x1653d0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1653d4: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x1653d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1653d8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1653d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1653dc: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1653dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1653e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1653e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1653e4: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x1653e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x1653e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1653e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1653ec: 0x0  nop
    ctx->pc = 0x1653ecu;
    // NOP
    ctx->pc = 0x1653f0u;
}
