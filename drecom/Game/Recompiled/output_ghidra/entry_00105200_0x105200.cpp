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

// Function: entry_00105200
// Address: 0x105200 - 0x105254
void entry_00105200_0x105200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105200_0x105200");
#endif

    ctx->pc = 0x105200u;

label_105200:
    // 0x105200: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x105200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x105204: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x105204u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x105208: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x105208u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10520c: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x10520cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x105210: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x105210u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x105214: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x105214u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x105218: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x105218u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x10521c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x10521cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x105220: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x105220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x105224: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x105224u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x105228: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x105228u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x10522c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x10522cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x105230: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x105230u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x105234: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x105234u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x105238: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x105238u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x10523c: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x10523cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x105240: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x105240u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x105244: 0x700a50b6  psrlh       $t2, $t2, 2
    ctx->pc = 0x105244u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
    // 0x105248: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x105248u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x10524c: 0x1ce0ffec  bgtz        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x10524Cu;
    {
        const bool branch_taken_0x10524c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x105250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10524Cu;
        // 0x105250: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10524c) {
            ctx->pc = 0x105200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105200;
        }
    }
    ctx->pc = 0x105254u;
}
