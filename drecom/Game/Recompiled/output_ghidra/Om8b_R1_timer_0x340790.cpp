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

// Function: Om8b_R1_timer
// Address: 0x340790 - 0x340914
void Om8b_R1_timer_0x340790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8b_R1_timer_0x340790");
#endif

    switch (ctx->pc) {
        case 0x3407e0u: goto label_3407e0;
        case 0x340804u: goto label_340804;
        case 0x340814u: goto label_340814;
        case 0x34082cu: goto label_34082c;
        case 0x340850u: goto label_340850;
        case 0x340860u: goto label_340860;
        case 0x340898u: goto label_340898;
        case 0x3408bcu: goto label_3408bc;
        default: break;
    }

    ctx->pc = 0x340790u;

    // 0x340790: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x340790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x340794: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x340794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x340798: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x340798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34079c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34079cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3407a0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x3407a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x3407a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3407a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3407a8: 0x8c641290  lw          $a0, 0x1290($v1)
    ctx->pc = 0x3407a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4752)));
    // 0x3407ac: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3407acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3407b0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3407b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3407b4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3407b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3407b8: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x3407b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3407bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3407bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3407c0: 0x8c63128c  lw          $v1, 0x128C($v1)
    ctx->pc = 0x3407c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x3407c4: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x3407c4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x3407c8: 0x0  nop
    ctx->pc = 0x3407c8u;
    // NOP
    // 0x3407cc: 0x0  nop
    ctx->pc = 0x3407ccu;
    // NOP
    // 0x3407d0: 0x8812  mflo        $s1
    ctx->pc = 0x3407d0u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x3407d4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x3407d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3407d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3407D8u;
    {
        const bool branch_taken_0x3407d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3407d8) {
            ctx->pc = 0x340818u;
            goto label_340818;
        }
    }
    ctx->pc = 0x3407E0u;
label_3407e0:
    // 0x3407e0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3407e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3407e4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3407e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3407e8: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x3407e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3407ec: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x3407ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3407f0: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x3407f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3407f4: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x3407f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3407f8: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x3407f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3407fc: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x3407FCu;
    SET_GPR_U32(ctx, 31, 0x340804u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x3407FCu, 0x340804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340804u;
label_340804:
    // 0x340804: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x340804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340808: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x340808u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x34080c: 0xc0cfc80  jal         func_33F200
    ctx->pc = 0x34080Cu;
    SET_GPR_U32(ctx, 31, 0x340814u);
    ctx->pc = 0x33F200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F200u, 0x34080Cu, 0x340814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340814u;
label_340814:
    // 0x340814: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x340814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_340818:
    // 0x340818: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x340818u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x34081c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x34081Cu;
    {
        const bool branch_taken_0x34081c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34081c) {
            ctx->pc = 0x3407E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3407e0;
        }
    }
    ctx->pc = 0x340824u;
    // 0x340824: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x340824u;
    {
        const bool branch_taken_0x340824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340824) {
            ctx->pc = 0x340868u;
            goto label_340868;
        }
    }
    ctx->pc = 0x34082Cu;
label_34082c:
    // 0x34082c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34082cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340830: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x340830u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x340834: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x340834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x340838: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x340838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34083c: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x34083cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x340840: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x340840u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x340844: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x340844u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x340848: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x340848u;
    SET_GPR_U32(ctx, 31, 0x340850u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x340848u, 0x340850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340850u;
label_340850:
    // 0x340850: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x340850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340854: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x340854u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x340858: 0xc0cfcbc  jal         func_33F2F0
    ctx->pc = 0x340858u;
    SET_GPR_U32(ctx, 31, 0x340860u);
    ctx->pc = 0x33F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F2F0u, 0x340858u, 0x340860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340860u;
label_340860:
    // 0x340860: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x340860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x340864: 0x0  nop
    ctx->pc = 0x340864u;
    // NOP
label_340868:
    // 0x340868: 0x2e03000d  sltiu       $v1, $s0, 0xD
    ctx->pc = 0x340868u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x34086c: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x34086Cu;
    {
        const bool branch_taken_0x34086c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34086c) {
            ctx->pc = 0x34082Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34082c;
        }
    }
    ctx->pc = 0x340874u;
    // 0x340874: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x340874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340878: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x340878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x34087c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x34087cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340880: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x340880u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340884: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x340884u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340888: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x340888u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34088c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x34088cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340890: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x340890u;
    SET_GPR_U32(ctx, 31, 0x340898u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x340890u, 0x340898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340898u;
label_340898:
    // 0x340898: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x340898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34089c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x34089cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3408a0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3408a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3408a4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3408a4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3408a8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3408a8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3408ac: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x3408acu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3408b0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x3408b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3408b4: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x3408B4u;
    SET_GPR_U32(ctx, 31, 0x3408BCu);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x3408B4u, 0x3408BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3408BCu;
label_3408bc:
    // 0x3408bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3408bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3408c0: 0x8c831290  lw          $v1, 0x1290($a0)
    ctx->pc = 0x3408c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4752)));
    // 0x3408c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3408c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3408c8: 0xac831290  sw          $v1, 0x1290($a0)
    ctx->pc = 0x3408c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4752), GPR_U32(ctx, 3));
    // 0x3408cc: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3408CCu;
    {
        const bool branch_taken_0x3408cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3408cc) {
            ctx->pc = 0x3408FCu;
            goto label_3408fc;
        }
    }
    ctx->pc = 0x3408D4u;
    // 0x3408d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3408d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3408d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3408d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3408dc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3408dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3408e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3408e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3408e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3408e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3408e8: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x3408e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x3408ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3408ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3408f0: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x3408f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x3408f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3408f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3408f8: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x3408f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_3408fc:
    // 0x3408fc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3408fcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340900: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x340900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x340904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340908: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x340908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34090c: 0x3e00008  jr          $ra
    ctx->pc = 0x34090Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34090Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340914u;
}
