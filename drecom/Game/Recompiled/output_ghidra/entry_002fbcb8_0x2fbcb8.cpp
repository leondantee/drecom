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

// Function: entry_002fbcb8
// Address: 0x2fbcb8 - 0x2fbe18
void entry_002fbcb8_0x2fbcb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fbcb8_0x2fbcb8");
#endif

    ctx->pc = 0x2fbcb8u;

    // 0x2fbcb8: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x2fbcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbcbc: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x2fbcbcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2fbcc0: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x2fbcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2fbcc4: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x2fbcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2fbcc8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2fbcc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbccc: 0x1040c0  sll         $t0, $s0, 3
    ctx->pc = 0x2fbcccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbcd0: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x2fbcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2fbcd4: 0x2643821  addu        $a3, $s3, $a0
    ctx->pc = 0x2fbcd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2fbcd8: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x2fbcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x2fbcdc: 0x2608ffff  addiu       $t0, $s0, -0x1
    ctx->pc = 0x2fbcdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbce0: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x2fbce0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2fbce4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2fbce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2fbce8: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x2fbce8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2fbcec: 0x2643821  addu        $a3, $s3, $a0
    ctx->pc = 0x2fbcecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2fbcf0: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x2fbcf0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fbcf4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2fbcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbcf8: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x2fbcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2fbcfc: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x2fbcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2fbd00: 0x2653821  addu        $a3, $s3, $a1
    ctx->pc = 0x2fbd00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2fbd04: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x2fbd04u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
    // 0x2fbd08: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x2fbd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbd0c: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x2fbd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2fbd10: 0x24a60002  addiu       $a2, $a1, 0x2
    ctx->pc = 0x2fbd10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2fbd14: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x2fbd14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2fbd18: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x2fbd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2fbd1c: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x2fbd1cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbd20: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2fbd20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbd24: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2fbd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2fbd28: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x2fbd28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbd2c: 0x2652021  addu        $a0, $s3, $a1
    ctx->pc = 0x2fbd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2fbd30: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x2fbd30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x2fbd34: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x2fbd34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbd38: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2fbd38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2fbd3c: 0x24660003  addiu       $a2, $v1, 0x3
    ctx->pc = 0x2fbd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2fbd40: 0x63900  sll         $a3, $a2, 4
    ctx->pc = 0x2fbd40u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2fbd44: 0x2671821  addu        $v1, $s3, $a3
    ctx->pc = 0x2fbd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x2fbd48: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x2fbd48u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbd4c: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x2fbd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbd50: 0x24850003  addiu       $a1, $a0, 0x3
    ctx->pc = 0x2fbd50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x2fbd54: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2fbd54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2fbd58: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x2fbd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2fbd5c: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x2fbd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x2fbd60: 0x2606ffff  addiu       $a2, $s0, -0x1
    ctx->pc = 0x2fbd60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbd64: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2fbd64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2fbd68: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x2fbd68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2fbd6c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fbd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbd70: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x2fbd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2fbd74: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2fbd74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbd78: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x2fbd78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbd7c: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x2fbd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2fbd80: 0x63900  sll         $a3, $a2, 4
    ctx->pc = 0x2fbd80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2fbd84: 0x2672021  addu        $a0, $s3, $a3
    ctx->pc = 0x2fbd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x2fbd88: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2fbd88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2fbd8c: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x2fbd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbd90: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x2fbd90u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2fbd94: 0x24c40005  addiu       $a0, $a2, 0x5
    ctx->pc = 0x2fbd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x2fbd98: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x2fbd98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2fbd9c: 0x2661821  addu        $v1, $s3, $a2
    ctx->pc = 0x2fbd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x2fbda0: 0x78690000  lq          $t1, 0x0($v1)
    ctx->pc = 0x2fbda0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbda4: 0x1040c0  sll         $t0, $s0, 3
    ctx->pc = 0x2fbda4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbda8: 0x25030005  addiu       $v1, $t0, 0x5
    ctx->pc = 0x2fbda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x2fbdac: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x2fbdacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbdb0: 0x2672021  addu        $a0, $s3, $a3
    ctx->pc = 0x2fbdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x2fbdb4: 0x7c890000  sq          $t1, 0x0($a0)
    ctx->pc = 0x2fbdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 9));
    // 0x2fbdb8: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x2fbdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbdbc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2fbdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2fbdc0: 0x24640006  addiu       $a0, $v1, 0x6
    ctx->pc = 0x2fbdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x2fbdc4: 0x44900  sll         $t1, $a0, 4
    ctx->pc = 0x2fbdc4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2fbdc8: 0x2693821  addu        $a3, $s3, $t1
    ctx->pc = 0x2fbdc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
    // 0x2fbdcc: 0x78e80000  lq          $t0, 0x0($a3)
    ctx->pc = 0x2fbdccu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fbdd0: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x2fbdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbdd4: 0x24840006  addiu       $a0, $a0, 0x6
    ctx->pc = 0x2fbdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x2fbdd8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2fbdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2fbddc: 0x2643821  addu        $a3, $s3, $a0
    ctx->pc = 0x2fbddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2fbde0: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x2fbde0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x2fbde4: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x2fbde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbde8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2fbde8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2fbdec: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x2fbdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x2fbdf0: 0x3b100  sll         $s6, $v1, 4
    ctx->pc = 0x2fbdf0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbdf4: 0x2763021  addu        $a2, $s3, $s6
    ctx->pc = 0x2fbdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x2fbdf8: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x2fbdf8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fbdfc: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x2fbdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbe00: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x2fbe00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x2fbe04: 0x3b100  sll         $s6, $v1, 4
    ctx->pc = 0x2fbe04u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbe08: 0x2761821  addu        $v1, $s3, $s6
    ctx->pc = 0x2fbe08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x2fbe0c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x2fbe0cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x2fbe10: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x2fbe10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbe14: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x2fbe14u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2fbe18u;
}
