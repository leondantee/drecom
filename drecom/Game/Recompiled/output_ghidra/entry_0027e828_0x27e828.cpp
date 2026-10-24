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

// Function: entry_0027e828
// Address: 0x27e828 - 0x27e890
void entry_0027e828_0x27e828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027e828_0x27e828");
#endif

    switch (ctx->pc) {
        case 0x27e84cu: goto label_27e84c;
        case 0x27e858u: goto label_27e858;
        case 0x27e87cu: goto label_27e87c;
        case 0x27e888u: goto label_27e888;
        default: break;
    }

    ctx->pc = 0x27e828u;

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
    ctx->pc = 0x27e890u;
}
