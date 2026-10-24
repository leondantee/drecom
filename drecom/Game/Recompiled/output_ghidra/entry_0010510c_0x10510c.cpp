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

// Function: entry_0010510c
// Address: 0x10510c - 0x105180
void entry_0010510c_0x10510c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010510c_0x10510c");
#endif

    ctx->pc = 0x10510cu;

label_10510c:
    // 0x10510c: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x10510cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x105110: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x105110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x105114: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x105114u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x105118: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x105118u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10511c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x10511cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x105120: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x105120u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x105124: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x105124u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x105128: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x105128u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x10512c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x10512cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x105130: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x105130u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x105134: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x105134u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x105138: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x105138u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x10513c: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x10513cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x105140: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x105140u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x105144: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x105144u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x105148: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x105148u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x10514c: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x10514cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x105150: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x105150u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x105154: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x105154u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x105158: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x105158u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x10515c: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x10515cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x105160: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x105160u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x105164: 0x700210b6  psrlh       $v0, $v0, 2
    ctx->pc = 0x105164u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 2));
    // 0x105168: 0x700318b6  psrlh       $v1, $v1, 2
    ctx->pc = 0x105168u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 2));
    // 0x10516c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x10516cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x105170: 0xc5040  sll         $t2, $t4, 1
    ctx->pc = 0x105170u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x105174: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x105174u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x105178: 0x1ce0ffe4  bgtz        $a3, . + 4 + (-0x1C << 2)
    ctx->pc = 0x105178u;
    {
        const bool branch_taken_0x105178 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x10517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105178u;
        // 0x10517c: 0x1ca7021  addu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105178) {
            ctx->pc = 0x10510Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10510c;
        }
    }
    ctx->pc = 0x105180u;
}
