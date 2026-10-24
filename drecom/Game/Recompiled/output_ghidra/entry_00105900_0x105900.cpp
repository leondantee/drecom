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

// Function: entry_00105900
// Address: 0x105900 - 0x10596c
void entry_00105900_0x105900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105900_0x105900");
#endif

    ctx->pc = 0x105900u;

label_105900:
    // 0x105900: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x105900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x105904: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x105904u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x105908: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x105908u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10590c: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x10590cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x105910: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x105910u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x105914: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x105914u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x105918: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x105918u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x10591c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x10591cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x105920: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x105920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x105924: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x105924u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x105928: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x105928u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x10592c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x10592cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x105930: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x105930u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x105934: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x105934u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x105938: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x105938u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x10593c: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x10593cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x105940: 0x700a50b6  psrlh       $t2, $t2, 2
    ctx->pc = 0x105940u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
    // 0x105944: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x105944u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x105948: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x105948u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x10594c: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x10594cu;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x105950: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x105950u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x105954: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x105954u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x105958: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x105958u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x10595c: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x10595cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x105960: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x105960u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x105964: 0x1ce0ffe6  bgtz        $a3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x105964u;
    {
        const bool branch_taken_0x105964 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x105968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105964u;
        // 0x105968: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105964) {
            ctx->pc = 0x105900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105900;
        }
    }
    ctx->pc = 0x10596Cu;
}
