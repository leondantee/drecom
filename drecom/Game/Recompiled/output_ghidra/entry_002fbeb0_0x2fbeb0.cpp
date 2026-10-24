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

// Function: entry_002fbeb0
// Address: 0x2fbeb0 - 0x2fbfb0
void entry_002fbeb0_0x2fbeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fbeb0_0x2fbeb0");
#endif

    ctx->pc = 0x2fbeb0u;

    // 0x2fbeb0: 0x1e2040  sll         $a0, $fp, 1
    ctx->pc = 0x2fbeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x2fbeb4: 0x7080f628  paddub      $fp, $a0, $zero
    ctx->pc = 0x2fbeb4u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2fbeb8: 0x1e2900  sll         $a1, $fp, 4
    ctx->pc = 0x2fbeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x2fbebc: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x2fbebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2fbec0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fbec0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbec4: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x2fbec4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2fbec8: 0x2651821  addu        $v1, $s3, $a1
    ctx->pc = 0x2fbec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2fbecc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fbeccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fbed0: 0x27c30001  addiu       $v1, $fp, 0x1
    ctx->pc = 0x2fbed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x2fbed4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2fbed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbed8: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x2fbed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2fbedc: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x2fbedcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbee0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2fbee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fbee4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2fbee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbee8: 0x2642821  addu        $a1, $s3, $a0
    ctx->pc = 0x2fbee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2fbeec: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x2fbeecu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x2fbef0: 0x27c60002  addiu       $a2, $fp, 0x2
    ctx->pc = 0x2fbef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
    // 0x2fbef4: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x2fbef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2fbef8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2fbef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fbefc: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fbefcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbf00: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x2fbf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2fbf04: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fbf04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbf08: 0x2632821  addu        $a1, $s3, $v1
    ctx->pc = 0x2fbf08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2fbf0c: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2fbf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x2fbf10: 0x27c30003  addiu       $v1, $fp, 0x3
    ctx->pc = 0x2fbf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 3));
    // 0x2fbf14: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fbf14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbf18: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x2fbf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fbf1c: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x2fbf1cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fbf20: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x2fbf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x2fbf24: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fbf24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbf28: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x2fbf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2fbf2c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x2fbf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x2fbf30: 0x27c40004  addiu       $a0, $fp, 0x4
    ctx->pc = 0x2fbf30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2fbf34: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x2fbf34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2fbf38: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2fbf38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fbf3c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2fbf3cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbf40: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x2fbf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2fbf44: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fbf44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbf48: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x2fbf48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2fbf4c: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x2fbf4cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x2fbf50: 0x27c50005  addiu       $a1, $fp, 0x5
    ctx->pc = 0x2fbf50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 5));
    // 0x2fbf54: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x2fbf54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2fbf58: 0x2261821  addu        $v1, $s1, $a2
    ctx->pc = 0x2fbf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2fbf5c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2fbf5cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbf60: 0x26030005  addiu       $v1, $s0, 0x5
    ctx->pc = 0x2fbf60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x2fbf64: 0x34100  sll         $t0, $v1, 4
    ctx->pc = 0x2fbf64u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbf68: 0x2683821  addu        $a3, $s3, $t0
    ctx->pc = 0x2fbf68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x2fbf6c: 0x7ce50000  sq          $a1, 0x0($a3)
    ctx->pc = 0x2fbf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 5));
    // 0x2fbf70: 0x27c30006  addiu       $v1, $fp, 0x6
    ctx->pc = 0x2fbf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 6));
    // 0x2fbf74: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x2fbf74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbf78: 0x2253021  addu        $a2, $s1, $a1
    ctx->pc = 0x2fbf78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2fbf7c: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x2fbf7cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fbf80: 0x26030006  addiu       $v1, $s0, 0x6
    ctx->pc = 0x2fbf80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x2fbf84: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fbf84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbf88: 0x2632821  addu        $a1, $s3, $v1
    ctx->pc = 0x2fbf88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2fbf8c: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2fbf8cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x2fbf90: 0x27c30007  addiu       $v1, $fp, 0x7
    ctx->pc = 0x2fbf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 7));
    // 0x2fbf94: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2fbf94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbf98: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x2fbf98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2fbf9c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fbf9cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbfa0: 0x26030007  addiu       $v1, $s0, 0x7
    ctx->pc = 0x2fbfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x2fbfa4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x2fbfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbfa8: 0x2653021  addu        $a2, $s3, $a1
    ctx->pc = 0x2fbfa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2fbfac: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x2fbfacu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    ctx->pc = 0x2fbfb0u;
}
