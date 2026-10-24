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

// Function: entry_00104dfc
// Address: 0x104dfc - 0x104e4c
void entry_00104dfc_0x104dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104dfc_0x104dfc");
#endif

    ctx->pc = 0x104dfcu;

label_104dfc:
    // 0x104dfc: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x104dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x104e00: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x104e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x104e04: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x104e04u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x104e08: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x104e08u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x104e0c: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x104e0cu;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x104e10: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x104e10u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x104e14: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x104e14u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x104e18: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x104e18u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x104e1c: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x104e1cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x104e20: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x104e20u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x104e24: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x104e24u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x104e28: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x104e28u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x104e2c: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x104e2cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x104e30: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x104e30u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x104e34: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x104e34u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x104e38: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x104e38u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x104e3c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x104e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x104e40: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x104e40u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x104e44: 0x1ce0ffed  bgtz        $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x104E44u;
    {
        const bool branch_taken_0x104e44 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x104E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E44u;
        // 0x104e48: 0x1cc7021  addu        $t6, $t6, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e44) {
            ctx->pc = 0x104DFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104dfc;
        }
    }
    ctx->pc = 0x104E4Cu;
}
