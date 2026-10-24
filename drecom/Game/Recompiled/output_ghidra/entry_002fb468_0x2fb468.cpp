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

// Function: entry_002fb468
// Address: 0x2fb468 - 0x2fb4c8
void entry_002fb468_0x2fb468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fb468_0x2fb468");
#endif

    ctx->pc = 0x2fb468u;

    // 0x2fb468: 0x151e3c  dsll32      $v1, $s5, 24
    ctx->pc = 0x2fb468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fb46c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fb46cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fb470: 0x321c0  sll         $a0, $v1, 7
    ctx->pc = 0x2fb470u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2fb474: 0x2841821  addu        $v1, $s4, $a0
    ctx->pc = 0x2fb474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2fb478: 0x24631600  addiu       $v1, $v1, 0x1600
    ctx->pc = 0x2fb478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x2fb47c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2fb47cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb480: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2fb480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fb484: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fb484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fb488: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x2fb488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fb48c: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x2fb48cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x2fb490: 0x152e3c  dsll32      $a1, $s5, 24
    ctx->pc = 0x2fb490u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fb494: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x2fb494u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x2fb498: 0x519c0  sll         $v1, $a1, 7
    ctx->pc = 0x2fb498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x2fb49c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x2fb49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2fb4a0: 0x24631610  addiu       $v1, $v1, 0x1610
    ctx->pc = 0x2fb4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5648));
    // 0x2fb4a4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fb4a4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb4a8: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2fb4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fb4ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2fb4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2fb4b0: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x2fb4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fb4b4: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x2fb4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2fb4b8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fb4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fb4bc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2fb4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fb4c0: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x2fb4c0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fb4c4: 0x0  nop
    ctx->pc = 0x2fb4c4u;
    // NOP
    ctx->pc = 0x2fb4c8u;
}
