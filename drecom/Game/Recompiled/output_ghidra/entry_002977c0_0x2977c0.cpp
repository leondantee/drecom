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

// Function: entry_002977c0
// Address: 0x2977c0 - 0x2977f0
void entry_002977c0_0x2977c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002977c0_0x2977c0");
#endif

    ctx->pc = 0x2977c0u;

    // 0x2977c0: 0x27c30010  addiu       $v1, $fp, 0x10
    ctx->pc = 0x2977c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x2977c4: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x2977c4u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2977c8: 0x2662002c  addiu       $v0, $s3, 0x2C
    ctx->pc = 0x2977c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
    // 0x2977cc: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x2977ccu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2977d0: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x2977d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2977d4: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x2977d4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2977d8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x2977d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2977dc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2977dcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2977e0: 0x8e0269d4  lw          $v0, 0x69D4($s0)
    ctx->pc = 0x2977e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27092)));
    // 0x2977e4: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2977e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2977e8: 0x26160008  addiu       $s6, $s0, 0x8
    ctx->pc = 0x2977e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2977ec: 0x0  nop
    ctx->pc = 0x2977ecu;
    // NOP
    ctx->pc = 0x2977f0u;
}
