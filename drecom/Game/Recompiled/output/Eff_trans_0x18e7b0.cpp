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

// Function: Eff_trans
// Address: 0x18e7b0 - 0x18e9c8
void Eff_trans_0x18e7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_trans_0x18e7b0");
#endif

    switch (ctx->pc) {
        case 0x18e7b0u: goto label_18e7b0;
        case 0x18e7b4u: goto label_18e7b4;
        case 0x18e7b8u: goto label_18e7b8;
        case 0x18e7bcu: goto label_18e7bc;
        case 0x18e7c0u: goto label_18e7c0;
        case 0x18e7c4u: goto label_18e7c4;
        case 0x18e7c8u: goto label_18e7c8;
        case 0x18e7ccu: goto label_18e7cc;
        case 0x18e7d0u: goto label_18e7d0;
        case 0x18e7d4u: goto label_18e7d4;
        case 0x18e7d8u: goto label_18e7d8;
        case 0x18e7dcu: goto label_18e7dc;
        case 0x18e7e0u: goto label_18e7e0;
        case 0x18e7e4u: goto label_18e7e4;
        case 0x18e7e8u: goto label_18e7e8;
        case 0x18e7ecu: goto label_18e7ec;
        case 0x18e7f0u: goto label_18e7f0;
        case 0x18e7f4u: goto label_18e7f4;
        case 0x18e7f8u: goto label_18e7f8;
        case 0x18e7fcu: goto label_18e7fc;
        case 0x18e800u: goto label_18e800;
        case 0x18e804u: goto label_18e804;
        case 0x18e808u: goto label_18e808;
        case 0x18e80cu: goto label_18e80c;
        case 0x18e810u: goto label_18e810;
        case 0x18e814u: goto label_18e814;
        case 0x18e818u: goto label_18e818;
        case 0x18e81cu: goto label_18e81c;
        case 0x18e820u: goto label_18e820;
        case 0x18e824u: goto label_18e824;
        case 0x18e828u: goto label_18e828;
        case 0x18e82cu: goto label_18e82c;
        case 0x18e830u: goto label_18e830;
        case 0x18e834u: goto label_18e834;
        case 0x18e838u: goto label_18e838;
        case 0x18e83cu: goto label_18e83c;
        case 0x18e840u: goto label_18e840;
        case 0x18e844u: goto label_18e844;
        case 0x18e848u: goto label_18e848;
        case 0x18e84cu: goto label_18e84c;
        case 0x18e850u: goto label_18e850;
        case 0x18e854u: goto label_18e854;
        case 0x18e858u: goto label_18e858;
        case 0x18e85cu: goto label_18e85c;
        case 0x18e860u: goto label_18e860;
        case 0x18e864u: goto label_18e864;
        case 0x18e868u: goto label_18e868;
        case 0x18e86cu: goto label_18e86c;
        case 0x18e870u: goto label_18e870;
        case 0x18e874u: goto label_18e874;
        case 0x18e878u: goto label_18e878;
        case 0x18e87cu: goto label_18e87c;
        case 0x18e880u: goto label_18e880;
        case 0x18e884u: goto label_18e884;
        case 0x18e888u: goto label_18e888;
        case 0x18e88cu: goto label_18e88c;
        case 0x18e890u: goto label_18e890;
        case 0x18e894u: goto label_18e894;
        case 0x18e898u: goto label_18e898;
        case 0x18e89cu: goto label_18e89c;
        case 0x18e8a0u: goto label_18e8a0;
        case 0x18e8a4u: goto label_18e8a4;
        case 0x18e8a8u: goto label_18e8a8;
        case 0x18e8acu: goto label_18e8ac;
        case 0x18e8b0u: goto label_18e8b0;
        case 0x18e8b4u: goto label_18e8b4;
        case 0x18e8b8u: goto label_18e8b8;
        case 0x18e8bcu: goto label_18e8bc;
        case 0x18e8c0u: goto label_18e8c0;
        case 0x18e8c4u: goto label_18e8c4;
        case 0x18e8c8u: goto label_18e8c8;
        case 0x18e8ccu: goto label_18e8cc;
        case 0x18e8d0u: goto label_18e8d0;
        case 0x18e8d4u: goto label_18e8d4;
        case 0x18e8d8u: goto label_18e8d8;
        case 0x18e8dcu: goto label_18e8dc;
        case 0x18e8e0u: goto label_18e8e0;
        case 0x18e8e4u: goto label_18e8e4;
        case 0x18e8e8u: goto label_18e8e8;
        case 0x18e8ecu: goto label_18e8ec;
        case 0x18e8f0u: goto label_18e8f0;
        case 0x18e8f4u: goto label_18e8f4;
        case 0x18e8f8u: goto label_18e8f8;
        case 0x18e8fcu: goto label_18e8fc;
        case 0x18e900u: goto label_18e900;
        case 0x18e904u: goto label_18e904;
        case 0x18e908u: goto label_18e908;
        case 0x18e90cu: goto label_18e90c;
        case 0x18e910u: goto label_18e910;
        case 0x18e914u: goto label_18e914;
        case 0x18e918u: goto label_18e918;
        case 0x18e91cu: goto label_18e91c;
        case 0x18e920u: goto label_18e920;
        case 0x18e924u: goto label_18e924;
        case 0x18e928u: goto label_18e928;
        case 0x18e92cu: goto label_18e92c;
        case 0x18e930u: goto label_18e930;
        case 0x18e934u: goto label_18e934;
        case 0x18e938u: goto label_18e938;
        case 0x18e93cu: goto label_18e93c;
        case 0x18e940u: goto label_18e940;
        case 0x18e944u: goto label_18e944;
        case 0x18e948u: goto label_18e948;
        case 0x18e94cu: goto label_18e94c;
        case 0x18e950u: goto label_18e950;
        case 0x18e954u: goto label_18e954;
        case 0x18e958u: goto label_18e958;
        case 0x18e95cu: goto label_18e95c;
        case 0x18e960u: goto label_18e960;
        case 0x18e964u: goto label_18e964;
        case 0x18e968u: goto label_18e968;
        case 0x18e96cu: goto label_18e96c;
        case 0x18e970u: goto label_18e970;
        case 0x18e974u: goto label_18e974;
        case 0x18e978u: goto label_18e978;
        case 0x18e97cu: goto label_18e97c;
        case 0x18e980u: goto label_18e980;
        case 0x18e984u: goto label_18e984;
        case 0x18e988u: goto label_18e988;
        case 0x18e98cu: goto label_18e98c;
        case 0x18e990u: goto label_18e990;
        case 0x18e994u: goto label_18e994;
        case 0x18e998u: goto label_18e998;
        case 0x18e99cu: goto label_18e99c;
        case 0x18e9a0u: goto label_18e9a0;
        case 0x18e9a4u: goto label_18e9a4;
        case 0x18e9a8u: goto label_18e9a8;
        case 0x18e9acu: goto label_18e9ac;
        case 0x18e9b0u: goto label_18e9b0;
        case 0x18e9b4u: goto label_18e9b4;
        case 0x18e9b8u: goto label_18e9b8;
        case 0x18e9bcu: goto label_18e9bc;
        case 0x18e9c0u: goto label_18e9c0;
        case 0x18e9c4u: goto label_18e9c4;
        default: break;
    }

    ctx->pc = 0x18e7b0u;

label_18e7b0:
    // 0x18e7b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18e7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_18e7b4:
    // 0x18e7b4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x18e7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
label_18e7b8:
    // 0x18e7b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18e7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_18e7bc:
    // 0x18e7bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18e7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18e7c0:
    // 0x18e7c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18e7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18e7c4:
    // 0x18e7c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18e7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18e7c8:
    // 0x18e7c8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x18e7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_18e7cc:
    // 0x18e7cc: 0x2473a630  addiu       $s3, $v1, -0x59D0
    ctx->pc = 0x18e7ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944304));
label_18e7d0:
    // 0x18e7d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18e7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_18e7d4:
    // 0x18e7d4: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x18e7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 316)));
label_18e7d8:
    // 0x18e7d8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x18e7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_18e7dc:
    // 0x18e7dc: 0x32480  sll         $a0, $v1, 18
    ctx->pc = 0x18e7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 18));
label_18e7e0:
    // 0x18e7e0: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x18e7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_18e7e4:
    // 0x18e7e4: 0x24632580  addiu       $v1, $v1, 0x2580
    ctx->pc = 0x18e7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9600));
label_18e7e8:
    // 0x18e7e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18e7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18e7ec:
    // 0x18e7ec: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x18e7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
label_18e7f0:
    // 0x18e7f0: 0xac232580  sw          $v1, 0x2580($at)
    ctx->pc = 0x18e7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9600), GPR_U32(ctx, 3));
label_18e7f4:
    // 0x18e7f4: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x18e7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_18e7f8:
    // 0x18e7f8: 0x24632600  addiu       $v1, $v1, 0x2600
    ctx->pc = 0x18e7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9728));
label_18e7fc:
    // 0x18e7fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18e7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_18e800:
    // 0x18e800: 0xac23a600  sw          $v1, -0x5A00($at)
    ctx->pc = 0x18e800u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944256), GPR_U32(ctx, 3));
label_18e804:
    // 0x18e804: 0x8e700038  lw          $s0, 0x38($s3)
    ctx->pc = 0x18e804u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_18e808:
    // 0x18e808: 0x10000023  b           . + 4 + (0x23 << 2)
label_18e80c:
    if (ctx->pc == 0x18E80Cu) {
        ctx->pc = 0x18E810u;
        goto label_18e810;
    }
    ctx->pc = 0x18E808u;
    {
        const bool branch_taken_0x18e808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e808) {
            ctx->pc = 0x18E898u;
            goto label_18e898;
        }
    }
    ctx->pc = 0x18E810u;
label_18e810:
    // 0x18e810: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x18e810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_18e814:
    // 0x18e814: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x18e814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_18e818:
    // 0x18e818: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_18e81c:
    if (ctx->pc == 0x18E81Cu) {
        ctx->pc = 0x18E820u;
        goto label_18e820;
    }
    ctx->pc = 0x18E818u;
    {
        const bool branch_taken_0x18e818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e818) {
            ctx->pc = 0x18E890u;
            goto label_18e890;
        }
    }
    ctx->pc = 0x18E820u;
label_18e820:
    // 0x18e820: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18e820u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18e824:
    // 0x18e824: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x18e824u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_18e828:
    // 0x18e828: 0x9202011e  lbu         $v0, 0x11E($s0)
    ctx->pc = 0x18e828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 286)));
label_18e82c:
    // 0x18e82c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18e82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18e830:
    // 0x18e830: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18e830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18e834:
    // 0x18e834: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x18e834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_18e838:
    // 0x18e838: 0x24427300  addiu       $v0, $v0, 0x7300
    ctx->pc = 0x18e838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29440));
label_18e83c:
    // 0x18e83c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e840:
    // 0x18e840: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18e840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e844:
    // 0x18e844: 0x40f809  jalr        $v0
label_18e848:
    if (ctx->pc == 0x18E848u) {
        ctx->pc = 0x18E84Cu;
        goto label_18e84c;
    }
    ctx->pc = 0x18E844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E84Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E844u, 0x18E84Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E84Cu;
label_18e84c:
    // 0x18e84c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18e84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_18e850:
    // 0x18e850: 0x90230e04  lbu         $v1, 0xE04($at)
    ctx->pc = 0x18e850u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 3588)));
label_18e854:
    // 0x18e854: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x18e854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_18e858:
    // 0x18e858: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x18e858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_18e85c:
    // 0x18e85c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_18e860:
    if (ctx->pc == 0x18E860u) {
        ctx->pc = 0x18E864u;
        goto label_18e864;
    }
    ctx->pc = 0x18E85Cu;
    {
        const bool branch_taken_0x18e85c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e85c) {
            ctx->pc = 0x18E890u;
            goto label_18e890;
        }
    }
    ctx->pc = 0x18E864u;
label_18e864:
    // 0x18e864: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18e864u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18e868:
    // 0x18e868: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18e868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e86c:
    // 0x18e86c: 0x9202011e  lbu         $v0, 0x11E($s0)
    ctx->pc = 0x18e86cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 286)));
label_18e870:
    // 0x18e870: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18e870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18e874:
    // 0x18e874: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18e874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18e878:
    // 0x18e878: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x18e878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_18e87c:
    // 0x18e87c: 0x24427300  addiu       $v0, $v0, 0x7300
    ctx->pc = 0x18e87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29440));
label_18e880:
    // 0x18e880: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e884:
    // 0x18e884: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18e884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e888:
    // 0x18e888: 0x40f809  jalr        $v0
label_18e88c:
    if (ctx->pc == 0x18E88Cu) {
        ctx->pc = 0x18E890u;
        goto label_18e890;
    }
    ctx->pc = 0x18E888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E890u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E888u, 0x18E890u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E890u;
label_18e890:
    // 0x18e890: 0x8e100218  lw          $s0, 0x218($s0)
    ctx->pc = 0x18e890u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_18e894:
    // 0x18e894: 0x0  nop
    ctx->pc = 0x18e894u;
    // NOP
label_18e898:
    // 0x18e898: 0x1600ffdd  bnez        $s0, . + 4 + (-0x23 << 2)
label_18e89c:
    if (ctx->pc == 0x18E89Cu) {
        ctx->pc = 0x18E8A0u;
        goto label_18e8a0;
    }
    ctx->pc = 0x18E898u;
    {
        const bool branch_taken_0x18e898 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e898) {
            ctx->pc = 0x18E810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e810;
        }
    }
    ctx->pc = 0x18E8A0u;
label_18e8a0:
    // 0x18e8a0: 0x8e720048  lw          $s2, 0x48($s3)
    ctx->pc = 0x18e8a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_18e8a4:
    // 0x18e8a4: 0x10000016  b           . + 4 + (0x16 << 2)
label_18e8a8:
    if (ctx->pc == 0x18E8A8u) {
        ctx->pc = 0x18E8ACu;
        goto label_18e8ac;
    }
    ctx->pc = 0x18E8A4u;
    {
        const bool branch_taken_0x18e8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e8a4) {
            ctx->pc = 0x18E900u;
            goto label_18e900;
        }
    }
    ctx->pc = 0x18E8ACu;
label_18e8ac:
    // 0x18e8ac: 0x8e43020c  lw          $v1, 0x20C($s2)
    ctx->pc = 0x18e8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
label_18e8b0:
    // 0x18e8b0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x18e8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_18e8b4:
    // 0x18e8b4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_18e8b8:
    if (ctx->pc == 0x18E8B8u) {
        ctx->pc = 0x18E8BCu;
        goto label_18e8bc;
    }
    ctx->pc = 0x18E8B4u;
    {
        const bool branch_taken_0x18e8b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e8b4) {
            ctx->pc = 0x18E8F8u;
            goto label_18e8f8;
        }
    }
    ctx->pc = 0x18E8BCu;
label_18e8bc:
    // 0x18e8bc: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x18e8bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_18e8c0:
    // 0x18e8c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x18e8c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_18e8c4:
    // 0x18e8c4: 0xc064444  jal         func_191110
label_18e8c8:
    if (ctx->pc == 0x18E8C8u) {
        ctx->pc = 0x18E8CCu;
        goto label_18e8cc;
    }
    ctx->pc = 0x18E8C4u;
    SET_GPR_U32(ctx, 31, 0x18E8CCu);
    ctx->pc = 0x191110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191110u, 0x18E8C4u, 0x18E8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E8CCu;
label_18e8cc:
    // 0x18e8cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18e8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_18e8d0:
    // 0x18e8d0: 0x90230e04  lbu         $v1, 0xE04($at)
    ctx->pc = 0x18e8d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 3588)));
label_18e8d4:
    // 0x18e8d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x18e8d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_18e8d8:
    // 0x18e8d8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x18e8d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_18e8dc:
    // 0x18e8dc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_18e8e0:
    if (ctx->pc == 0x18E8E0u) {
        ctx->pc = 0x18E8E4u;
        goto label_18e8e4;
    }
    ctx->pc = 0x18E8DCu;
    {
        const bool branch_taken_0x18e8dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e8dc) {
            ctx->pc = 0x18E8F8u;
            goto label_18e8f8;
        }
    }
    ctx->pc = 0x18E8E4u;
label_18e8e4:
    // 0x18e8e4: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x18e8e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_18e8e8:
    // 0x18e8e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18e8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e8ec:
    // 0x18e8ec: 0xc064444  jal         func_191110
label_18e8f0:
    if (ctx->pc == 0x18E8F0u) {
        ctx->pc = 0x18E8F4u;
        goto label_18e8f4;
    }
    ctx->pc = 0x18E8ECu;
    SET_GPR_U32(ctx, 31, 0x18E8F4u);
    ctx->pc = 0x191110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191110u, 0x18E8ECu, 0x18E8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E8F4u;
label_18e8f4:
    // 0x18e8f4: 0x0  nop
    ctx->pc = 0x18e8f4u;
    // NOP
label_18e8f8:
    // 0x18e8f8: 0x8e520218  lw          $s2, 0x218($s2)
    ctx->pc = 0x18e8f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_18e8fc:
    // 0x18e8fc: 0x0  nop
    ctx->pc = 0x18e8fcu;
    // NOP
label_18e900:
    // 0x18e900: 0x1640ffea  bnez        $s2, . + 4 + (-0x16 << 2)
label_18e904:
    if (ctx->pc == 0x18E904u) {
        ctx->pc = 0x18E908u;
        goto label_18e908;
    }
    ctx->pc = 0x18E900u;
    {
        const bool branch_taken_0x18e900 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e900) {
            ctx->pc = 0x18E8ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e8ac;
        }
    }
    ctx->pc = 0x18E908u;
label_18e908:
    // 0x18e908: 0x8e710068  lw          $s1, 0x68($s3)
    ctx->pc = 0x18e908u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
label_18e90c:
    // 0x18e90c: 0x10000024  b           . + 4 + (0x24 << 2)
label_18e910:
    if (ctx->pc == 0x18E910u) {
        ctx->pc = 0x18E914u;
        goto label_18e914;
    }
    ctx->pc = 0x18E90Cu;
    {
        const bool branch_taken_0x18e90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e90c) {
            ctx->pc = 0x18E9A0u;
            goto label_18e9a0;
        }
    }
    ctx->pc = 0x18E914u;
label_18e914:
    // 0x18e914: 0x8e230b18  lw          $v1, 0xB18($s1)
    ctx->pc = 0x18e914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2840)));
label_18e918:
    // 0x18e918: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x18e918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_18e91c:
    // 0x18e91c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_18e920:
    if (ctx->pc == 0x18E920u) {
        ctx->pc = 0x18E924u;
        goto label_18e924;
    }
    ctx->pc = 0x18E91Cu;
    {
        const bool branch_taken_0x18e91c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e91c) {
            ctx->pc = 0x18E998u;
            goto label_18e998;
        }
    }
    ctx->pc = 0x18E924u;
label_18e924:
    // 0x18e924: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x18e924u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_18e928:
    // 0x18e928: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x18e928u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_18e92c:
    // 0x18e92c: 0x9222034e  lbu         $v0, 0x34E($s1)
    ctx->pc = 0x18e92cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 846)));
label_18e930:
    // 0x18e930: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18e930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18e934:
    // 0x18e934: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18e934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18e938:
    // 0x18e938: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x18e938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_18e93c:
    // 0x18e93c: 0x24427310  addiu       $v0, $v0, 0x7310
    ctx->pc = 0x18e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29456));
label_18e940:
    // 0x18e940: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e944:
    // 0x18e944: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18e944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e948:
    // 0x18e948: 0x40f809  jalr        $v0
label_18e94c:
    if (ctx->pc == 0x18E94Cu) {
        ctx->pc = 0x18E950u;
        goto label_18e950;
    }
    ctx->pc = 0x18E948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E950u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E948u, 0x18E950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E950u;
label_18e950:
    // 0x18e950: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18e950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_18e954:
    // 0x18e954: 0x90230e04  lbu         $v1, 0xE04($at)
    ctx->pc = 0x18e954u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 3588)));
label_18e958:
    // 0x18e958: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x18e958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_18e95c:
    // 0x18e95c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x18e95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_18e960:
    // 0x18e960: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_18e964:
    if (ctx->pc == 0x18E964u) {
        ctx->pc = 0x18E968u;
        goto label_18e968;
    }
    ctx->pc = 0x18E960u;
    {
        const bool branch_taken_0x18e960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e960) {
            ctx->pc = 0x18E998u;
            goto label_18e998;
        }
    }
    ctx->pc = 0x18E968u;
label_18e968:
    // 0x18e968: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x18e968u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_18e96c:
    // 0x18e96c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18e96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e970:
    // 0x18e970: 0x9222034e  lbu         $v0, 0x34E($s1)
    ctx->pc = 0x18e970u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 846)));
label_18e974:
    // 0x18e974: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18e974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18e978:
    // 0x18e978: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18e978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18e97c:
    // 0x18e97c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x18e97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_18e980:
    // 0x18e980: 0x24427310  addiu       $v0, $v0, 0x7310
    ctx->pc = 0x18e980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29456));
label_18e984:
    // 0x18e984: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e988:
    // 0x18e988: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18e988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e98c:
    // 0x18e98c: 0x40f809  jalr        $v0
label_18e990:
    if (ctx->pc == 0x18E990u) {
        ctx->pc = 0x18E994u;
        goto label_18e994;
    }
    ctx->pc = 0x18E98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E994u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E98Cu, 0x18E994u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E994u;
label_18e994:
    // 0x18e994: 0x0  nop
    ctx->pc = 0x18e994u;
    // NOP
label_18e998:
    // 0x18e998: 0x8e310b24  lw          $s1, 0xB24($s1)
    ctx->pc = 0x18e998u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2852)));
label_18e99c:
    // 0x18e99c: 0x0  nop
    ctx->pc = 0x18e99cu;
    // NOP
label_18e9a0:
    // 0x18e9a0: 0x1620ffdc  bnez        $s1, . + 4 + (-0x24 << 2)
label_18e9a4:
    if (ctx->pc == 0x18E9A4u) {
        ctx->pc = 0x18E9A8u;
        goto label_18e9a8;
    }
    ctx->pc = 0x18E9A0u;
    {
        const bool branch_taken_0x18e9a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e9a0) {
            ctx->pc = 0x18E914u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e914;
        }
    }
    ctx->pc = 0x18E9A8u;
label_18e9a8:
    // 0x18e9a8: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x18e9a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18e9ac:
    // 0x18e9ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18e9acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18e9b0:
    // 0x18e9b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18e9b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18e9b4:
    // 0x18e9b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18e9b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18e9b8:
    // 0x18e9b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e9b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18e9bc:
    // 0x18e9bc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x18e9bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_18e9c0:
    // 0x18e9c0: 0x3e00008  jr          $ra
label_18e9c4:
    if (ctx->pc == 0x18E9C4u) {
        ctx->pc = 0x18E9C8u;
        goto label_fallthrough_0x18e9c0;
    }
    ctx->pc = 0x18E9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E9C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18e9c0:
    ctx->pc = 0x18E9C8u;
}
