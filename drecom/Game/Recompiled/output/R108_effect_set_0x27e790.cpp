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

// Function: R108_effect_set
// Address: 0x27e790 - 0x27ec58
void R108_effect_set_0x27e790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R108_effect_set_0x27e790");
#endif

    switch (ctx->pc) {
        case 0x27e7a8u: goto label_27e7a8;
        case 0x27e7ccu: goto label_27e7cc;
        case 0x27e7d8u: goto label_27e7d8;
        case 0x27e7fcu: goto label_27e7fc;
        case 0x27e808u: goto label_27e808;
        case 0x27e828u: goto label_27e828;
        case 0x27e84cu: goto label_27e84c;
        case 0x27e858u: goto label_27e858;
        case 0x27e87cu: goto label_27e87c;
        case 0x27e888u: goto label_27e888;
        case 0x27e8a8u: goto label_27e8a8;
        case 0x27e8dcu: goto label_27e8dc;
        case 0x27e8e8u: goto label_27e8e8;
        case 0x27e908u: goto label_27e908;
        case 0x27e970u: goto label_27e970;
        case 0x27e97cu: goto label_27e97c;
        case 0x27e9a0u: goto label_27e9a0;
        case 0x27e9c4u: goto label_27e9c4;
        case 0x27e9e8u: goto label_27e9e8;
        case 0x27ea1cu: goto label_27ea1c;
        case 0x27ea28u: goto label_27ea28;
        case 0x27ea84u: goto label_27ea84;
        case 0x27ea90u: goto label_27ea90;
        case 0x27eadcu: goto label_27eadc;
        case 0x27eae8u: goto label_27eae8;
        case 0x27eb0cu: goto label_27eb0c;
        case 0x27eb30u: goto label_27eb30;
        case 0x27eb54u: goto label_27eb54;
        case 0x27eb98u: goto label_27eb98;
        case 0x27eba4u: goto label_27eba4;
        case 0x27ec00u: goto label_27ec00;
        case 0x27ec0cu: goto label_27ec0c;
        case 0x27ec44u: goto label_27ec44;
        default: break;
    }

    ctx->pc = 0x27e790u;

    // 0x27e790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27e790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27e794: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x27e794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x27e798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27e798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27e79c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27e79cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27e7a0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x27E7A0u;
    {
        const bool branch_taken_0x27e7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e7a0) {
            ctx->pc = 0x27E810u;
            goto label_27e810;
        }
    }
    ctx->pc = 0x27E7A8u;
label_27e7a8:
    // 0x27e7a8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27e7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27e7ac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27e7b0: 0x24421680  addiu       $v0, $v0, 0x1680
    ctx->pc = 0x27e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5760));
    // 0x27e7b4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27e7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e7b8: 0x24045702  addiu       $a0, $zero, 0x5702
    ctx->pc = 0x27e7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22274));
    // 0x27e7bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27e7bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27e7c0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27e7c0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27e7c4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27E7C4u;
    SET_GPR_U32(ctx, 31, 0x27E7CCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27E7C4u, 0x27E7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E7CCu;
label_27e7cc:
    // 0x27e7cc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27e7ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27e7d0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27E7D0u;
    SET_GPR_U32(ctx, 31, 0x27E7D8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27E7D0u, 0x27E7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E7D8u;
label_27e7d8:
    // 0x27e7d8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27e7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27e7dc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27e7e0: 0x24421680  addiu       $v0, $v0, 0x1680
    ctx->pc = 0x27e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5760));
    // 0x27e7e4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27e7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e7e8: 0x24045a02  addiu       $a0, $zero, 0x5A02
    ctx->pc = 0x27e7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23042));
    // 0x27e7ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27e7ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27e7f0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27e7f0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27e7f4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27E7F4u;
    SET_GPR_U32(ctx, 31, 0x27E7FCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27E7F4u, 0x27E7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E7FCu;
label_27e7fc:
    // 0x27e7fc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27e7fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27e800: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27E800u;
    SET_GPR_U32(ctx, 31, 0x27E808u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27E800u, 0x27E808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E808u;
label_27e808:
    // 0x27e808: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27e808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27e80c: 0x0  nop
    ctx->pc = 0x27e80cu;
    // NOP
label_27e810:
    // 0x27e810: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x27e810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x27e814: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x27E814u;
    {
        const bool branch_taken_0x27e814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e814) {
            ctx->pc = 0x27E7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e7a8;
        }
    }
    ctx->pc = 0x27E81Cu;
    // 0x27e81c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27e81cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27e820: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x27E820u;
    {
        const bool branch_taken_0x27e820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e820) {
            ctx->pc = 0x27E890u;
            goto label_27e890;
        }
    }
    ctx->pc = 0x27E828u;
label_27e828:
    // 0x27e828: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27e828u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27e82c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27e830: 0x244216d0  addiu       $v0, $v0, 0x16D0
    ctx->pc = 0x27e830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5840));
    // 0x27e834: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27e834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e838: 0x24045707  addiu       $a0, $zero, 0x5707
    ctx->pc = 0x27e838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22279));
    // 0x27e83c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27e83cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27e840: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27e840u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27e844: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27E844u;
    SET_GPR_U32(ctx, 31, 0x27E84Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27E844u, 0x27E84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E84Cu;
label_27e84c:
    // 0x27e84c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27e84cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27e850: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27E850u;
    SET_GPR_U32(ctx, 31, 0x27E858u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27E850u, 0x27E858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E858u;
label_27e858:
    // 0x27e858: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27e858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27e85c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27e85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27e860: 0x244216d0  addiu       $v0, $v0, 0x16D0
    ctx->pc = 0x27e860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5840));
    // 0x27e864: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27e864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e868: 0x24045a04  addiu       $a0, $zero, 0x5A04
    ctx->pc = 0x27e868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23044));
    // 0x27e86c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27e86cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27e870: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27e870u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27e874: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27E874u;
    SET_GPR_U32(ctx, 31, 0x27E87Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27E874u, 0x27E87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E87Cu;
label_27e87c:
    // 0x27e87c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27e87cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27e880: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27E880u;
    SET_GPR_U32(ctx, 31, 0x27E888u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27E880u, 0x27E888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E888u;
label_27e888:
    // 0x27e888: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27e888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27e88c: 0x0  nop
    ctx->pc = 0x27e88cu;
    // NOP
label_27e890:
    // 0x27e890: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x27e890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x27e894: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x27E894u;
    {
        const bool branch_taken_0x27e894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e894) {
            ctx->pc = 0x27E828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e828;
        }
    }
    ctx->pc = 0x27E89Cu;
    // 0x27e89c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27e89cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27e8a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x27E8A0u;
    {
        const bool branch_taken_0x27e8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e8a0) {
            ctx->pc = 0x27E8F0u;
            goto label_27e8f0;
        }
    }
    ctx->pc = 0x27E8A8u;
label_27e8a8:
    // 0x27e8a8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27e8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27e8ac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27e8b0: 0x244216f0  addiu       $v0, $v0, 0x16F0
    ctx->pc = 0x27e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5872));
    // 0x27e8b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27e8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e8b8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27e8b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e8bc: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27e8c0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27e8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27e8c4: 0x24041712  addiu       $a0, $zero, 0x1712
    ctx->pc = 0x27e8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5906));
    // 0x27e8c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27e8c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27e8cc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27e8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27e8d0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27e8d0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27e8d4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27E8D4u;
    SET_GPR_U32(ctx, 31, 0x27E8DCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27E8D4u, 0x27E8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E8DCu;
label_27e8dc:
    // 0x27e8dc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27e8dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27e8e0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27E8E0u;
    SET_GPR_U32(ctx, 31, 0x27E8E8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27E8E0u, 0x27E8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E8E8u;
label_27e8e8:
    // 0x27e8e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27e8e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27e8ec: 0x0  nop
    ctx->pc = 0x27e8ecu;
    // NOP
label_27e8f0:
    // 0x27e8f0: 0x2e02001e  sltiu       $v0, $s0, 0x1E
    ctx->pc = 0x27e8f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x27e8f4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x27E8F4u;
    {
        const bool branch_taken_0x27e8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e8f4) {
            ctx->pc = 0x27E8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e8a8;
        }
    }
    ctx->pc = 0x27E8FCu;
    // 0x27e8fc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27e8fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27e900: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x27E900u;
    {
        const bool branch_taken_0x27e900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e900) {
            ctx->pc = 0x27EC18u;
            goto label_27ec18;
        }
    }
    ctx->pc = 0x27E908u;
label_27e908:
    // 0x27e908: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27e908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27e90c: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27E90Cu;
    {
        const bool branch_taken_0x27e90c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x27e90c) {
            ctx->pc = 0x27E928u;
            goto label_27e928;
        }
    }
    ctx->pc = 0x27E914u;
    // 0x27e914: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27e914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e918: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27E918u;
    {
        const bool branch_taken_0x27e918 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x27e918) {
            ctx->pc = 0x27E928u;
            goto label_27e928;
        }
    }
    ctx->pc = 0x27E920u;
    // 0x27e920: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x27E920u;
    {
        const bool branch_taken_0x27e920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e920) {
            ctx->pc = 0x27EA98u;
            goto label_27ea98;
        }
    }
    ctx->pc = 0x27E928u;
label_27e928:
    // 0x27e928: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27e928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27e92c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27e930: 0x244218d0  addiu       $v0, $v0, 0x18D0
    ctx->pc = 0x27e930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6352));
    // 0x27e934: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27e934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e938: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27e938u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e93c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27e940: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27e940u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27e944: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x27e944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x27e948: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x27e948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x27e94c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27e94cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e950: 0x0  nop
    ctx->pc = 0x27e950u;
    // NOP
    // 0x27e954: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27e954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27e958: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x27e958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x27e95c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27e95cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27e960: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27e960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27e964: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27e964u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27e968: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27E968u;
    SET_GPR_U32(ctx, 31, 0x27E970u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27E968u, 0x27E970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E970u;
label_27e970:
    // 0x27e970: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27e970u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27e974: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27E974u;
    SET_GPR_U32(ctx, 31, 0x27E97Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27E974u, 0x27E97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E97Cu;
label_27e97c:
    // 0x27e97c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27e97cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27e980: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27e980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27e984: 0x244218d0  addiu       $v0, $v0, 0x18D0
    ctx->pc = 0x27e984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6352));
    // 0x27e988: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27e988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e98c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27e98cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e990: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27e990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27e994: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27e994u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27e998: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27E998u;
    SET_GPR_U32(ctx, 31, 0x27E9A0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27E998u, 0x27E9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E9A0u;
label_27e9a0:
    // 0x27e9a0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x27e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x27e9a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27e9a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e9a8: 0x0  nop
    ctx->pc = 0x27e9a8u;
    // NOP
    // 0x27e9ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27e9acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27e9b0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x27e9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e9b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27e9b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27e9b8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x27e9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27e9bc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27E9BCu;
    SET_GPR_U32(ctx, 31, 0x27E9C4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27E9BCu, 0x27E9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E9C4u;
label_27e9c4:
    // 0x27e9c4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x27e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x27e9c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27e9c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e9cc: 0x0  nop
    ctx->pc = 0x27e9ccu;
    // NOP
    // 0x27e9d0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27e9d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27e9d4: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x27e9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e9d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27e9d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27e9dc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27e9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27e9e0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27E9E0u;
    SET_GPR_U32(ctx, 31, 0x27E9E8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27E9E0u, 0x27E9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E9E8u;
label_27e9e8:
    // 0x27e9e8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x27e9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x27e9ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27e9ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e9f0: 0x0  nop
    ctx->pc = 0x27e9f0u;
    // NOP
    // 0x27e9f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27e9f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27e9f8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x27e9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e9fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27e9fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27ea00: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x27ea00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27ea04: 0x24047900  addiu       $a0, $zero, 0x7900
    ctx->pc = 0x27ea04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x27ea08: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27ea08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ea0c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27ea0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27ea10: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27ea10u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ea14: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27EA14u;
    SET_GPR_U32(ctx, 31, 0x27EA1Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27EA14u, 0x27EA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA1Cu;
label_27ea1c:
    // 0x27ea1c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27ea1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27ea20: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27EA20u;
    SET_GPR_U32(ctx, 31, 0x27EA28u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27EA20u, 0x27EA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA28u;
label_27ea28:
    // 0x27ea28: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27ea2c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27ea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27ea30: 0x244218d0  addiu       $v0, $v0, 0x18D0
    ctx->pc = 0x27ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6352));
    // 0x27ea34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27ea38: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27ea38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27ea3c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27ea40: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27ea40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27ea44: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x27ea44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ea48: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x27ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x27ea4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ea4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ea50: 0x0  nop
    ctx->pc = 0x27ea50u;
    // NOP
    // 0x27ea54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27ea54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27ea58: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27ea58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27ea5c: 0x3c0240b0  lui         $v0, 0x40B0
    ctx->pc = 0x27ea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16560 << 16));
    // 0x27ea60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ea60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ea64: 0x0  nop
    ctx->pc = 0x27ea64u;
    // NOP
    // 0x27ea68: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27ea68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27ea6c: 0x24041718  addiu       $a0, $zero, 0x1718
    ctx->pc = 0x27ea6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5912));
    // 0x27ea70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27ea70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ea74: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27ea74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27ea78: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27ea78u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ea7c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27EA7Cu;
    SET_GPR_U32(ctx, 31, 0x27EA84u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27EA7Cu, 0x27EA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA84u;
label_27ea84:
    // 0x27ea84: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27ea84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27ea88: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27EA88u;
    SET_GPR_U32(ctx, 31, 0x27EA90u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27EA88u, 0x27EA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EA90u;
label_27ea90:
    // 0x27ea90: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x27EA90u;
    {
        const bool branch_taken_0x27ea90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ea90) {
            ctx->pc = 0x27EC10u;
            goto label_27ec10;
        }
    }
    ctx->pc = 0x27EA98u;
label_27ea98:
    // 0x27ea98: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27ea98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27ea9c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27eaa0: 0x244218d0  addiu       $v0, $v0, 0x18D0
    ctx->pc = 0x27eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6352));
    // 0x27eaa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27eaa8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27eaa8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27eaac: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27eab0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27eab0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27eab4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27eab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27eab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27eabc: 0x0  nop
    ctx->pc = 0x27eabcu;
    // NOP
    // 0x27eac0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27eac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27eac4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x27eac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27eac8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27eac8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27eacc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27eaccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27ead0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27ead0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ead4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27EAD4u;
    SET_GPR_U32(ctx, 31, 0x27EADCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27EAD4u, 0x27EADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EADCu;
label_27eadc:
    // 0x27eadc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27eadcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27eae0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27EAE0u;
    SET_GPR_U32(ctx, 31, 0x27EAE8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27EAE0u, 0x27EAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EAE8u;
label_27eae8:
    // 0x27eae8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27eae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27eaec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27eaf0: 0x244218d0  addiu       $v0, $v0, 0x18D0
    ctx->pc = 0x27eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6352));
    // 0x27eaf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27eaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27eaf8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27eaf8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27eafc: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27eafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27eb00: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27eb00u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27eb04: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27EB04u;
    SET_GPR_U32(ctx, 31, 0x27EB0Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27EB04u, 0x27EB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EB0Cu;
label_27eb0c:
    // 0x27eb0c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x27eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x27eb10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27eb10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27eb14: 0x0  nop
    ctx->pc = 0x27eb14u;
    // NOP
    // 0x27eb18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27eb18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27eb1c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x27eb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27eb20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27eb20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27eb24: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x27eb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27eb28: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27EB28u;
    SET_GPR_U32(ctx, 31, 0x27EB30u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27EB28u, 0x27EB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EB30u;
label_27eb30:
    // 0x27eb30: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x27eb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x27eb34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27eb34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27eb38: 0x0  nop
    ctx->pc = 0x27eb38u;
    // NOP
    // 0x27eb3c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27eb3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27eb40: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x27eb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27eb44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27eb44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27eb48: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27eb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27eb4c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27EB4Cu;
    SET_GPR_U32(ctx, 31, 0x27EB54u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27EB4Cu, 0x27EB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EB54u;
label_27eb54:
    // 0x27eb54: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x27eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x27eb58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27eb58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27eb5c: 0x0  nop
    ctx->pc = 0x27eb5cu;
    // NOP
    // 0x27eb60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27eb60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27eb64: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x27eb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27eb68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27eb68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27eb6c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x27eb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27eb70: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x27eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x27eb74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27eb74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27eb78: 0x0  nop
    ctx->pc = 0x27eb78u;
    // NOP
    // 0x27eb7c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27eb7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27eb80: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x27eb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27eb84: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27eb84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27eb88: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27eb88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27eb8c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27eb8cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27eb90: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27EB90u;
    SET_GPR_U32(ctx, 31, 0x27EB98u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27EB90u, 0x27EB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EB98u;
label_27eb98:
    // 0x27eb98: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27eb98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27eb9c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27EB9Cu;
    SET_GPR_U32(ctx, 31, 0x27EBA4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27EB9Cu, 0x27EBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EBA4u;
label_27eba4:
    // 0x27eba4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27eba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27eba8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27eba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27ebac: 0x244218d0  addiu       $v0, $v0, 0x18D0
    ctx->pc = 0x27ebacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6352));
    // 0x27ebb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27ebb4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27ebb4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27ebb8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27ebbc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27ebbcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27ebc0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x27ebc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ebc4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x27ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x27ebc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ebc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ebcc: 0x0  nop
    ctx->pc = 0x27ebccu;
    // NOP
    // 0x27ebd0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27ebd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27ebd4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27ebd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27ebd8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x27ebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x27ebdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ebdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ebe0: 0x0  nop
    ctx->pc = 0x27ebe0u;
    // NOP
    // 0x27ebe4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27ebe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27ebe8: 0x24041718  addiu       $a0, $zero, 0x1718
    ctx->pc = 0x27ebe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5912));
    // 0x27ebec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27ebecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ebf0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27ebf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27ebf4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27ebf4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ebf8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27EBF8u;
    SET_GPR_U32(ctx, 31, 0x27EC00u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27EBF8u, 0x27EC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC00u;
label_27ec00:
    // 0x27ec00: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27ec00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27ec04: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27EC04u;
    SET_GPR_U32(ctx, 31, 0x27EC0Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27EC04u, 0x27EC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC0Cu;
label_27ec0c:
    // 0x27ec0c: 0x0  nop
    ctx->pc = 0x27ec0cu;
    // NOP
label_27ec10:
    // 0x27ec10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27ec10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27ec14: 0x0  nop
    ctx->pc = 0x27ec14u;
    // NOP
label_27ec18:
    // 0x27ec18: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x27ec18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x27ec1c: 0x1440ff3a  bnez        $v0, . + 4 + (-0xC6 << 2)
    ctx->pc = 0x27EC1Cu;
    {
        const bool branch_taken_0x27ec1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ec1c) {
            ctx->pc = 0x27E908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e908;
        }
    }
    ctx->pc = 0x27EC24u;
    // 0x27ec24: 0x2404041b  addiu       $a0, $zero, 0x41B
    ctx->pc = 0x27ec24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1051));
    // 0x27ec28: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27ec28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27ec2c: 0x24451910  addiu       $a1, $v0, 0x1910
    ctx->pc = 0x27ec2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6416));
    // 0x27ec30: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x27ec30u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ec34: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27ec34u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ec38: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x27ec38u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ec3c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x27EC3Cu;
    SET_GPR_U32(ctx, 31, 0x27EC44u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x27EC3Cu, 0x27EC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC44u;
label_27ec44:
    // 0x27ec44: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27ec44u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ec48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27ec48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ec4c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27ec4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27ec50: 0x3e00008  jr          $ra
    ctx->pc = 0x27EC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EC58u;
}
