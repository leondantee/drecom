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

// Function: entry_0010543c
// Address: 0x10543c - 0x1054bc
void entry_0010543c_0x10543c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010543c_0x10543c");
#endif

    ctx->pc = 0x10543cu;

label_10543c:
    // 0x10543c: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x10543cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x105440: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x105440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x105444: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x105444u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x105448: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x105448u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10544c: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x10544cu;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x105450: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x105450u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x105454: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x105454u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x105458: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x105458u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x10545c: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x10545cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x105460: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x105460u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x105464: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x105464u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x105468: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x105468u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x10546c: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x10546cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x105470: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x105470u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x105474: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x105474u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x105478: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x105478u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x10547c: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x10547cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x105480: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x105480u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x105484: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x105484u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x105488: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x105488u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x10548c: 0x70405188  pcgth       $t2, $v0, $zero
    ctx->pc = 0x10548cu;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x105490: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x105490u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x105494: 0x704a5108  paddh       $t2, $v0, $t2
    ctx->pc = 0x105494u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x105498: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x105498u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x10549c: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x10549cu;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1054a0: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x1054a0u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x1054a4: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x1054a4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x1054a8: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x1054a8u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1054ac: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x1054acu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x1054b0: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x1054b0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x1054b4: 0x1ce0ffe1  bgtz        $a3, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1054B4u;
    {
        const bool branch_taken_0x1054b4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1054B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054B4u;
        // 0x1054b8: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054b4) {
            ctx->pc = 0x10543Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10543c;
        }
    }
    ctx->pc = 0x1054BCu;
}
