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

// Function: entry_002fb5e4
// Address: 0x2fb5e4 - 0x2fb640
void entry_002fb5e4_0x2fb5e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fb5e4_0x2fb5e4");
#endif

    ctx->pc = 0x2fb5e4u;

    // 0x2fb5e4: 0x151e3c  dsll32      $v1, $s5, 24
    ctx->pc = 0x2fb5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fb5e8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fb5e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fb5ec: 0x321c0  sll         $a0, $v1, 7
    ctx->pc = 0x2fb5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2fb5f0: 0x2841821  addu        $v1, $s4, $a0
    ctx->pc = 0x2fb5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2fb5f4: 0x24631600  addiu       $v1, $v1, 0x1600
    ctx->pc = 0x2fb5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x2fb5f8: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2fb5f8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb5fc: 0x103040  sll         $a2, $s0, 1
    ctx->pc = 0x2fb5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fb600: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x2fb600u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2fb604: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x2fb604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2fb608: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x2fb608u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x2fb60c: 0x151e3c  dsll32      $v1, $s5, 24
    ctx->pc = 0x2fb60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fb610: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fb610u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fb614: 0x329c0  sll         $a1, $v1, 7
    ctx->pc = 0x2fb614u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2fb618: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x2fb618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x2fb61c: 0x24631610  addiu       $v1, $v1, 0x1610
    ctx->pc = 0x2fb61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5648));
    // 0x2fb620: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fb620u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb624: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2fb624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fb628: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2fb628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2fb62c: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x2fb62cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fb630: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x2fb630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2fb634: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fb634u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fb638: 0x26170001  addiu       $s7, $s0, 0x1
    ctx->pc = 0x2fb638u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fb63c: 0x72e08628  paddub      $s0, $s7, $zero
    ctx->pc = 0x2fb63cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2fb640u;
}
