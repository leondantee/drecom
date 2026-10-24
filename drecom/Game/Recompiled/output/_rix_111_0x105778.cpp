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

// Function: _rix_111
// Address: 0x105778 - 0x1058a0
void _rix_111_0x105778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_rix_111_0x105778");
#endif

    switch (ctx->pc) {
        case 0x1057dcu: goto label_1057dc;
        default: break;
    }

    ctx->pc = 0x105778u;

    // 0x105778: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x105778u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10577c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x10577cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x105780: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x105780u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x105784: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x105784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x105788: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x105788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10578c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x10578cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x105790: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x105790u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x105794: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x105794u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x105798: 0x8c980010  lw          $t8, 0x10($a0)
    ctx->pc = 0x105798u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x10579c: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x10579cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1057a0: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x1057a0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1057a4: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x1057a4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1057a8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1057a8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1057ac: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x1057acu;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1057b0: 0x71097ee8  qfsrv       $t7, $t0, $t1
    ctx->pc = 0x1057b0u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9), ctx->sa & 0x7F));
    // 0x1057b4: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1057b4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1057b8: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x1057b8u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1057bc: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1057bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1057c0: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x1057c0u;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1057c4: 0x71ea7ee8  qfsrv       $t7, $t7, $t2
    ctx->pc = 0x1057c4u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x1057c8: 0x700f5688  pextlb      $t2, $zero, $t7
    ctx->pc = 0x1057c8u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x1057cc: 0x700f7ea8  pextub      $t7, $zero, $t7
    ctx->pc = 0x1057ccu;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x1057d0: 0x710a4108  paddh       $t0, $t0, $t2
    ctx->pc = 0x1057d0u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x1057d4: 0x10e0002a  beqz        $a3, . + 4 + (0x2A << 2)
    ctx->pc = 0x1057D4u;
    {
        const bool branch_taken_0x1057d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1057D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1057D4u;
        // 0x1057d8: 0x712f4908  paddh       $t1, $t1, $t7 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1057d4) {
            ctx->pc = 0x105880u;
            goto label_105880;
        }
    }
    ctx->pc = 0x1057DCu;
label_1057dc:
    // 0x1057dc: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x1057dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x1057e0: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x1057e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x1057e4: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x1057e4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1057e8: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x1057e8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1057ec: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1057ecu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1057f0: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x1057f0u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x1057f4: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x1057f4u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x1057f8: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x1057f8u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1057fc: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1057fcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x105800: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x105800u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x105804: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x105804u;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x105808: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x105808u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x10580c: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x10580cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x105810: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x105810u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x105814: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x105814u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x105818: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x105818u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x10581c: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x10581cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x105820: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x105820u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x105824: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x105824u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x105828: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x105828u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x10582c: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x10582cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x105830: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x105830u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x105834: 0x700210b6  psrlh       $v0, $v0, 2
    ctx->pc = 0x105834u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 2));
    // 0x105838: 0x700318b6  psrlh       $v1, $v1, 2
    ctx->pc = 0x105838u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 2));
    // 0x10583c: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x10583cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x105840: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x105840u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x105844: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x105844u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x105848: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x105848u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x10584c: 0x70405188  pcgth       $t2, $v0, $zero
    ctx->pc = 0x10584cu;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x105850: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x105850u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x105854: 0x704a5108  paddh       $t2, $v0, $t2
    ctx->pc = 0x105854u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x105858: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x105858u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x10585c: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x10585cu;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x105860: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x105860u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x105864: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x105864u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x105868: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x105868u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x10586c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x10586cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x105870: 0x185040  sll         $t2, $t8, 1
    ctx->pc = 0x105870u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x105874: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x105874u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x105878: 0x1ce0ffd8  bgtz        $a3, . + 4 + (-0x28 << 2)
    ctx->pc = 0x105878u;
    {
        const bool branch_taken_0x105878 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x10587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105878u;
        // 0x10587c: 0x1ca7021  addu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105878) {
            ctx->pc = 0x1057DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1057dc;
        }
    }
    ctx->pc = 0x105880u;
label_105880:
    // 0x105880: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x105880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x105884: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x105884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x105888: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x105888u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x10588c: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x10588cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x105890: 0x1540ffd2  bnez        $t2, . + 4 + (-0x2E << 2)
    ctx->pc = 0x105890u;
    {
        const bool branch_taken_0x105890 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x105894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105890u;
        // 0x105894: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105890) {
            ctx->pc = 0x1057DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1057dc;
        }
    }
    ctx->pc = 0x105898u;
    // 0x105898: 0x3e00008  jr          $ra
    ctx->pc = 0x105898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1058A0u;
}
