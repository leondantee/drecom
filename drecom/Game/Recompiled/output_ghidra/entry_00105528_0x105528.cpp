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

// Function: entry_00105528
// Address: 0x105528 - 0x10557c
void entry_00105528_0x105528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105528_0x105528");
#endif

    ctx->pc = 0x105528u;

label_105528:
    // 0x105528: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x105528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x10552c: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x10552cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x105530: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x105530u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x105534: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x105534u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x105538: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x105538u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x10553c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x10553cu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x105540: 0x70085688  pextlb      $t2, $zero, $t0
    ctx->pc = 0x105540u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x105544: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x105544u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x105548: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x105548u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x10554c: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x10554cu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x105550: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x105550u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x105554: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x105554u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x105558: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x105558u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x10555c: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x10555cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x105560: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x105560u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x105564: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x105564u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x105568: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x105568u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x10556c: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x10556cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x105570: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x105570u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x105574: 0x1ce0ffec  bgtz        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x105574u;
    {
        const bool branch_taken_0x105574 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x105578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105574u;
        // 0x105578: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105574) {
            ctx->pc = 0x105528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105528;
        }
    }
    ctx->pc = 0x10557Cu;
}
