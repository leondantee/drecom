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

// Function: entry_002fbfc0
// Address: 0x2fbfc0 - 0x2fc120
void entry_002fbfc0_0x2fbfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fbfc0_0x2fbfc0");
#endif

    ctx->pc = 0x2fbfc0u;

    // 0x2fbfc0: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x2fbfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbfc4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2fbfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2fbfc8: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x2fbfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbfcc: 0x2252021  addu        $a0, $s1, $a1
    ctx->pc = 0x2fbfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2fbfd0: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2fbfd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fbfd4: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x2fbfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbfd8: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x2fbfd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2fbfdc: 0x2262821  addu        $a1, $s1, $a2
    ctx->pc = 0x2fbfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2fbfe0: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2fbfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x2fbfe4: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x2fbfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbfe8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x2fbfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2fbfec: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2fbfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2fbff0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fbff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbff4: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x2fbff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fbff8: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x2fbff8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fbffc: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x2fbffcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fc000: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2fc000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2fc004: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fc004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fc008: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x2fc008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fc00c: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x2fc00cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x2fc010: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x2fc010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fc014: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2fc014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2fc018: 0x24640002  addiu       $a0, $v1, 0x2
    ctx->pc = 0x2fc018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2fc01c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x2fc01cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2fc020: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2fc020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fc024: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2fc024u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fc028: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2fc028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fc02c: 0x24770002  addiu       $s7, $v1, 0x2
    ctx->pc = 0x2fc02cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2fc030: 0x172100  sll         $a0, $s7, 4
    ctx->pc = 0x2fc030u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x2fc034: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x2fc034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2fc038: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x2fc038u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x2fc03c: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x2fc03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fc040: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2fc040u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2fc044: 0x24770003  addiu       $s7, $v1, 0x3
    ctx->pc = 0x2fc044u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2fc048: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x2fc048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x2fc04c: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x2fc04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fc050: 0x78970000  lq          $s7, 0x0($a0)
    ctx->pc = 0x2fc050u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fc054: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2fc054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fc058: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x2fc058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2fc05c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x2fc05cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2fc060: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2fc060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fc064: 0x7c770000  sq          $s7, 0x0($v1)
    ctx->pc = 0x2fc064u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 23));
    // 0x2fc068: 0x2606ffff  addiu       $a2, $s0, -0x1
    ctx->pc = 0x2fc068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fc06c: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2fc06cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2fc070: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2fc070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2fc074: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x2fc074u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2fc078: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x2fc078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2fc07c: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x2fc07cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fc080: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2fc080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fc084: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2fc084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2fc088: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fc088u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fc08c: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x2fc08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fc090: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x2fc090u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x2fc094: 0x2606ffff  addiu       $a2, $s0, -0x1
    ctx->pc = 0x2fc094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fc098: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2fc098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2fc09c: 0x24670005  addiu       $a3, $v1, 0x5
    ctx->pc = 0x2fc09cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x2fc0a0: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x2fc0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2fc0a4: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x2fc0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2fc0a8: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x2fc0a8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fc0ac: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x2fc0acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fc0b0: 0x24830005  addiu       $v1, $a0, 0x5
    ctx->pc = 0x2fc0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x2fc0b4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2fc0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fc0b8: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x2fc0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2fc0bc: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x2fc0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x2fc0c0: 0x2607ffff  addiu       $a3, $s0, -0x1
    ctx->pc = 0x2fc0c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fc0c4: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x2fc0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2fc0c8: 0x24c60006  addiu       $a2, $a2, 0x6
    ctx->pc = 0x2fc0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x2fc0cc: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x2fc0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2fc0d0: 0x2243821  addu        $a3, $s1, $a0
    ctx->pc = 0x2fc0d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2fc0d4: 0x78e60000  lq          $a2, 0x0($a3)
    ctx->pc = 0x2fc0d4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fc0d8: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2fc0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fc0dc: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x2fc0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x2fc0e0: 0x34100  sll         $t0, $v1, 4
    ctx->pc = 0x2fc0e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fc0e4: 0x2282021  addu        $a0, $s1, $t0
    ctx->pc = 0x2fc0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x2fc0e8: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x2fc0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x2fc0ec: 0x2607ffff  addiu       $a3, $s0, -0x1
    ctx->pc = 0x2fc0ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fc0f0: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x2fc0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2fc0f4: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x2fc0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x2fc0f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fc0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fc0fc: 0x2234021  addu        $t0, $s1, $v1
    ctx->pc = 0x2fc0fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fc100: 0x79040000  lq          $a0, 0x0($t0)
    ctx->pc = 0x2fc100u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2fc104: 0x1038c0  sll         $a3, $s0, 3
    ctx->pc = 0x2fc104u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fc108: 0x24e80007  addiu       $t0, $a3, 0x7
    ctx->pc = 0x2fc108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x2fc10c: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x2fc10cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2fc110: 0x2284021  addu        $t0, $s1, $t0
    ctx->pc = 0x2fc110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x2fc114: 0x7d040000  sq          $a0, 0x0($t0)
    ctx->pc = 0x2fc114u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 4));
    // 0x2fc118: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x2fc118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fc11c: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x2fc11cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2fc120u;
}
