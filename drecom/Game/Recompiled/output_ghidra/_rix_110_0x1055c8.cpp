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

// Function: _rix_110
// Address: 0x1055c8 - 0x1056a4
void _rix_110_0x1055c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_rix_110_0x1055c8");
#endif

    switch (ctx->pc) {
        case 0x1055f4u: goto label_1055f4;
        default: break;
    }

    ctx->pc = 0x1055c8u;

    // 0x1055c8: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1055c8u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1055cc: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1055ccu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1055d0: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1055d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1055d4: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1055d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1055d8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1055d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1055dc: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1055dcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1055e0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1055e0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1055e4: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x1055e4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1055e8: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x1055e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1055ec: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x1055ecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1055f0: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1055f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1055f4:
    // 0x1055f4: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x1055f4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1055f8: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x1055f8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1055fc: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1055fcu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x105600: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x105600u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x105604: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x105604u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x105608: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x105608u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x10560c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x10560cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x105610: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x105610u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x105614: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x105614u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x105618: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x105618u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x10561c: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x10561cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x105620: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x105620u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x105624: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x105624u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x105628: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x105628u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x10562c: 0x71591108  paddh       $v0, $t2, $t9
    ctx->pc = 0x10562cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x105630: 0x71f91908  paddh       $v1, $t7, $t9
    ctx->pc = 0x105630u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x105634: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x105634u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x105638: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x105638u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x10563c: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x10563cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x105640: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x105640u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x105644: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x105644u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x105648: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x105648u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x10564c: 0x70405188  pcgth       $t2, $v0, $zero
    ctx->pc = 0x10564cu;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x105650: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x105650u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x105654: 0x704a5108  paddh       $t2, $v0, $t2
    ctx->pc = 0x105654u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x105658: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x105658u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x10565c: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x10565cu;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x105660: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x105660u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x105664: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x105664u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x105668: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x105668u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x10566c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x10566cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x105670: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x105670u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x105674: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x105674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x105678: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x105678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x10567c: 0x1ce0ffdd  bgtz        $a3, . + 4 + (-0x23 << 2)
    ctx->pc = 0x10567Cu;
    {
        const bool branch_taken_0x10567c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x105680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10567Cu;
        // 0x105680: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10567c) {
            ctx->pc = 0x1055F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1055f4;
        }
    }
    ctx->pc = 0x105684u;
    // 0x105684: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x105684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x105688: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x105688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x10568c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x10568cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x105690: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x105690u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x105694: 0x1580ffd7  bnez        $t4, . + 4 + (-0x29 << 2)
    ctx->pc = 0x105694u;
    {
        const bool branch_taken_0x105694 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x105698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105694u;
        // 0x105698: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105694) {
            ctx->pc = 0x1055F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1055f4;
        }
    }
    ctx->pc = 0x10569Cu;
    // 0x10569c: 0x3e00008  jr          $ra
    ctx->pc = 0x10569Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10569Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1056A4u;
}
