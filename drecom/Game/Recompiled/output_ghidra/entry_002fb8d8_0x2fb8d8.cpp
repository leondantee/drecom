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

// Function: entry_002fb8d8
// Address: 0x2fb8d8 - 0x2fb938
void entry_002fb8d8_0x2fb8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fb8d8_0x2fb8d8");
#endif

    ctx->pc = 0x2fb8d8u;

    // 0x2fb8d8: 0x15263c  dsll32      $a0, $s5, 24
    ctx->pc = 0x2fb8d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fb8dc: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2fb8dcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2fb8e0: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x2fb8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x2fb8e4: 0x2843021  addu        $a2, $s4, $a0
    ctx->pc = 0x2fb8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2fb8e8: 0x24c41600  addiu       $a0, $a2, 0x1600
    ctx->pc = 0x2fb8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 5632));
    // 0x2fb8ec: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x2fb8ecu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fb8f0: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2fb8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fb8f4: 0x34900  sll         $t1, $v1, 4
    ctx->pc = 0x2fb8f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fb8f8: 0x2294021  addu        $t0, $s1, $t1
    ctx->pc = 0x2fb8f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x2fb8fc: 0x7d060000  sq          $a2, 0x0($t0)
    ctx->pc = 0x2fb8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 6));
    // 0x2fb900: 0x151e3c  dsll32      $v1, $s5, 24
    ctx->pc = 0x2fb900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fb904: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fb904u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fb908: 0x339c0  sll         $a3, $v1, 7
    ctx->pc = 0x2fb908u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2fb90c: 0x2872021  addu        $a0, $s4, $a3
    ctx->pc = 0x2fb90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x2fb910: 0x24831610  addiu       $v1, $a0, 0x1610
    ctx->pc = 0x2fb910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 5648));
    // 0x2fb914: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2fb914u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb918: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x2fb918u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fb91c: 0x24890001  addiu       $t1, $a0, 0x1
    ctx->pc = 0x2fb91cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2fb920: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x2fb920u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x2fb924: 0x2274021  addu        $t0, $s1, $a3
    ctx->pc = 0x2fb924u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x2fb928: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x2fb928u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
    // 0x2fb92c: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x2fb92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fb930: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x2fb930u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2fb934: 0x0  nop
    ctx->pc = 0x2fb934u;
    // NOP
    ctx->pc = 0x2fb938u;
}
