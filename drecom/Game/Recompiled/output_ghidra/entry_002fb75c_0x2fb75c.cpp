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

// Function: entry_002fb75c
// Address: 0x2fb75c - 0x2fb7b8
void entry_002fb75c_0x2fb75c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fb75c_0x2fb75c");
#endif

    ctx->pc = 0x2fb75cu;

    // 0x2fb75c: 0x15263c  dsll32      $a0, $s5, 24
    ctx->pc = 0x2fb75cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fb760: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2fb760u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2fb764: 0x439c0  sll         $a3, $a0, 7
    ctx->pc = 0x2fb764u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x2fb768: 0x2873021  addu        $a2, $s4, $a3
    ctx->pc = 0x2fb768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x2fb76c: 0x24c31600  addiu       $v1, $a2, 0x1600
    ctx->pc = 0x2fb76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 5632));
    // 0x2fb770: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2fb770u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb774: 0x104040  sll         $t0, $s0, 1
    ctx->pc = 0x2fb774u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fb778: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x2fb778u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2fb77c: 0x2243821  addu        $a3, $s1, $a0
    ctx->pc = 0x2fb77cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2fb780: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x2fb780u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x2fb784: 0x151e3c  dsll32      $v1, $s5, 24
    ctx->pc = 0x2fb784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fb788: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fb788u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fb78c: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x2fb78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2fb790: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x2fb790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2fb794: 0x24681610  addiu       $t0, $v1, 0x1610
    ctx->pc = 0x2fb794u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 5648));
    // 0x2fb798: 0x79040000  lq          $a0, 0x0($t0)
    ctx->pc = 0x2fb798u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2fb79c: 0x103840  sll         $a3, $s0, 1
    ctx->pc = 0x2fb79cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fb7a0: 0x24e80001  addiu       $t0, $a3, 0x1
    ctx->pc = 0x2fb7a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2fb7a4: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x2fb7a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2fb7a8: 0x2284021  addu        $t0, $s1, $t0
    ctx->pc = 0x2fb7a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x2fb7ac: 0x7d040000  sq          $a0, 0x0($t0)
    ctx->pc = 0x2fb7acu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 4));
    // 0x2fb7b0: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x2fb7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fb7b4: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x2fb7b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2fb7b8u;
}
