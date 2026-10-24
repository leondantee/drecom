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

// Function: _rix_011
// Address: 0x1050a8 - 0x1051a0
void _rix_011_0x1050a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_rix_011_0x1050a8");
#endif

    switch (ctx->pc) {
        case 0x10510cu: goto label_10510c;
        default: break;
    }

    ctx->pc = 0x1050a8u;

    // 0x1050a8: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1050a8u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1050ac: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1050acu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1050b0: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x1050b0u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x1050b4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1050b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1050b8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1050b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1050bc: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1050bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1050c0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1050c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1050c4: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1050c4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1050c8: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x1050c8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1050cc: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x1050ccu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1050d0: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x1050d0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1050d4: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x1050d4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1050d8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1050d8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1050dc: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x1050dcu;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1050e0: 0x71097ee8  qfsrv       $t7, $t0, $t1
    ctx->pc = 0x1050e0u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9), ctx->sa & 0x7F));
    // 0x1050e4: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1050e4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1050e8: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x1050e8u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1050ec: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1050ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1050f0: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x1050f0u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1050f4: 0x71ea7ee8  qfsrv       $t7, $t7, $t2
    ctx->pc = 0x1050f4u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x1050f8: 0x700f5688  pextlb      $t2, $zero, $t7
    ctx->pc = 0x1050f8u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x1050fc: 0x700f7ea8  pextub      $t7, $zero, $t7
    ctx->pc = 0x1050fcu;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x105100: 0x710a4108  paddh       $t0, $t0, $t2
    ctx->pc = 0x105100u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x105104: 0x10e0001e  beqz        $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x105104u;
    {
        const bool branch_taken_0x105104 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x105108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105104u;
        // 0x105108: 0x712f4908  paddh       $t1, $t1, $t7 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105104) {
            ctx->pc = 0x105180u;
            goto label_105180;
        }
    }
    ctx->pc = 0x10510Cu;
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
label_105180:
    // 0x105180: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x105180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x105184: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x105184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x105188: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x105188u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x10518c: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x10518cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x105190: 0x1540ffde  bnez        $t2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x105190u;
    {
        const bool branch_taken_0x105190 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x105194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105190u;
        // 0x105194: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105190) {
            ctx->pc = 0x10510Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10510c;
        }
    }
    ctx->pc = 0x105198u;
    // 0x105198: 0x3e00008  jr          $ra
    ctx->pc = 0x105198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1051A0u;
}
