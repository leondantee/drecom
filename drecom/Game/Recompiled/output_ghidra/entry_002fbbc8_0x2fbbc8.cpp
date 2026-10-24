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

// Function: entry_002fbbc8
// Address: 0x2fbbc8 - 0x2fbc8c
void entry_002fbbc8_0x2fbbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fbbc8_0x2fbbc8");
#endif

    ctx->pc = 0x2fbbc8u;

    // 0x2fbbc8: 0x1600ffa6  bnez        $s0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x2FBBC8u;
    {
        const bool branch_taken_0x2fbbc8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fbbc8) {
            ctx->pc = 0x2FBA64u;
            return;
        }
    }
    ctx->pc = 0x2FBBD0u;
    // 0x2fbbd0: 0x26250160  addiu       $a1, $s1, 0x160
    ctx->pc = 0x2fbbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x2fbbd4: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2fbbd4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fbbd8: 0x10b900  sll         $s7, $s0, 4
    ctx->pc = 0x2fbbd8u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2fbbdc: 0x2572021  addu        $a0, $s2, $s7
    ctx->pc = 0x2fbbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
    // 0x2fbbe0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2fbbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2fbbe4: 0x26230170  addiu       $v1, $s1, 0x170
    ctx->pc = 0x2fbbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
    // 0x2fbbe8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fbbe8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbbec: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2fbbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fbbf0: 0x3b900  sll         $s7, $v1, 4
    ctx->pc = 0x2fbbf0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbbf4: 0x2571821  addu        $v1, $s2, $s7
    ctx->pc = 0x2fbbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
    // 0x2fbbf8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fbbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fbbfc: 0x26240180  addiu       $a0, $s1, 0x180
    ctx->pc = 0x2fbbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
    // 0x2fbc00: 0x78970000  lq          $s7, 0x0($a0)
    ctx->pc = 0x2fbc00u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fbc04: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x2fbc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2fbc08: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2fbc08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbc0c: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x2fbc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2fbc10: 0x7c770000  sq          $s7, 0x0($v1)
    ctx->pc = 0x2fbc10u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 23));
    // 0x2fbc14: 0x26230190  addiu       $v1, $s1, 0x190
    ctx->pc = 0x2fbc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x2fbc18: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x2fbc18u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbc1c: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x2fbc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x2fbc20: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x2fbc20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbc24: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x2fbc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2fbc28: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x2fbc28u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x2fbc2c: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x2fbc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x2fbc30: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x2fbc30u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fbc34: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x2fbc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2fbc38: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fbc38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbc3c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2fbc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fbc40: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x2fbc40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x2fbc44: 0x262501b0  addiu       $a1, $s1, 0x1B0
    ctx->pc = 0x2fbc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
    // 0x2fbc48: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x2fbc48u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fbc4c: 0x26030005  addiu       $v1, $s0, 0x5
    ctx->pc = 0x2fbc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x2fbc50: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x2fbc50u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbc54: 0x2472021  addu        $a0, $s2, $a3
    ctx->pc = 0x2fbc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x2fbc58: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x2fbc58u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x2fbc5c: 0x262301c0  addiu       $v1, $s1, 0x1C0
    ctx->pc = 0x2fbc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
    // 0x2fbc60: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x2fbc60u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbc64: 0x26040006  addiu       $a0, $s0, 0x6
    ctx->pc = 0x2fbc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x2fbc68: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x2fbc68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2fbc6c: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x2fbc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fbc70: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x2fbc70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x2fbc74: 0x262401d0  addiu       $a0, $s1, 0x1D0
    ctx->pc = 0x2fbc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
    // 0x2fbc78: 0x78870000  lq          $a3, 0x0($a0)
    ctx->pc = 0x2fbc78u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fbc7c: 0x26060007  addiu       $a2, $s0, 0x7
    ctx->pc = 0x2fbc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x2fbc80: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2fbc80u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2fbc84: 0x2462021  addu        $a0, $s2, $a2
    ctx->pc = 0x2fbc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x2fbc88: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x2fbc88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
    ctx->pc = 0x2fbc8cu;
}
