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

// Function: entry_0018e810
// Address: 0x18e810 - 0x18e890
void entry_0018e810_0x18e810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e810_0x18e810");
#endif

    switch (ctx->pc) {
        case 0x18e84cu: goto label_18e84c;
        default: break;
    }

    ctx->pc = 0x18e810u;

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
            return;
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
            return;
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
        goto label_fallthrough_0x18e888;
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
label_fallthrough_0x18e888:
    ctx->pc = 0x18E890u;
}
