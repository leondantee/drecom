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

// Function: entry_002fba64
// Address: 0x2fba64 - 0x2fbbc8
void entry_002fba64_0x2fba64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fba64_0x2fba64");
#endif

    ctx->pc = 0x2fba64u;

    // 0x2fba64: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x2fba64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fba68: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x2fba68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2fba6c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2fba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2fba70: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x2fba70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fba74: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x2fba74u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fba78: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2fba78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fba7c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fba80: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x2fba80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fba84: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x2fba84u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x2fba88: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x2fba88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fba8c: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x2fba8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2fba90: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x2fba90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2fba94: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2fba94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fba98: 0x2442821  addu        $a1, $s2, $a0
    ctx->pc = 0x2fba98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2fba9c: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x2fba9cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fbaa0: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2fbaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbaa4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2fbaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2fbaa8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2fbaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbaac: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x2fbaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2fbab0: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x2fbab0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x2fbab4: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x2fbab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbab8: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x2fbab8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2fbabc: 0x24a30002  addiu       $v1, $a1, 0x2
    ctx->pc = 0x2fbabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2fbac0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fbac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbac4: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x2fbac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fbac8: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x2fbac8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fbacc: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2fbaccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbad0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2fbad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2fbad4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fbad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbad8: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x2fbad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fbadc: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x2fbadcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x2fbae0: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x2fbae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbae4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2fbae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2fbae8: 0x24650003  addiu       $a1, $v1, 0x3
    ctx->pc = 0x2fbae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2fbaec: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2fbaecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2fbaf0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2fbaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fbaf4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fbaf4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbaf8: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x2fbaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbafc: 0x24a60003  addiu       $a2, $a1, 0x3
    ctx->pc = 0x2fbafcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x2fbb00: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x2fbb00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2fbb04: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x2fbb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fbb08: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2fbb08u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x2fbb0c: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x2fbb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbb10: 0x340c0  sll         $t0, $v1, 3
    ctx->pc = 0x2fbb10u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2fbb14: 0x25070004  addiu       $a3, $t0, 0x4
    ctx->pc = 0x2fbb14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2fbb18: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x2fbb18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2fbb1c: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x2fbb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fbb20: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x2fbb20u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fbb24: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x2fbb24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbb28: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x2fbb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2fbb2c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fbb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbb30: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x2fbb30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fbb34: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x2fbb34u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x2fbb38: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x2fbb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbb3c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x2fbb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2fbb40: 0x24830005  addiu       $v1, $a0, 0x5
    ctx->pc = 0x2fbb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x2fbb44: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2fbb44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbb48: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x2fbb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2fbb4c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2fbb4cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbb50: 0x1030c0  sll         $a2, $s0, 3
    ctx->pc = 0x2fbb50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbb54: 0x24c30005  addiu       $v1, $a2, 0x5
    ctx->pc = 0x2fbb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x2fbb58: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2fbb58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbb5c: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x2fbb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2fbb60: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x2fbb60u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x2fbb64: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x2fbb64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbb68: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x2fbb68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2fbb6c: 0x24830006  addiu       $v1, $a0, 0x6
    ctx->pc = 0x2fbb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x2fbb70: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2fbb70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbb74: 0x2443021  addu        $a2, $s2, $a0
    ctx->pc = 0x2fbb74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2fbb78: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x2fbb78u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fbb7c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2fbb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbb80: 0x24640006  addiu       $a0, $v1, 0x6
    ctx->pc = 0x2fbb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x2fbb84: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x2fbb84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2fbb88: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2fbb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fbb8c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x2fbb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x2fbb90: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x2fbb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbb94: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x2fbb94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2fbb98: 0x24c40007  addiu       $a0, $a2, 0x7
    ctx->pc = 0x2fbb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x2fbb9c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x2fbb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2fbba0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2fbba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fbba4: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2fbba4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbba8: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2fbba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbbac: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x2fbbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x2fbbb0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2fbbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbbb4: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x2fbbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2fbbb8: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x2fbbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x2fbbbc: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x2fbbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbbc0: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x2fbbc0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fbbc4: 0x0  nop
    ctx->pc = 0x2fbbc4u;
    // NOP
    ctx->pc = 0x2fbbc8u;
}
