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

// Function: entry_0027e7a8
// Address: 0x27e7a8 - 0x27e810
void entry_0027e7a8_0x27e7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027e7a8_0x27e7a8");
#endif

    switch (ctx->pc) {
        case 0x27e7ccu: goto label_27e7cc;
        case 0x27e7d8u: goto label_27e7d8;
        case 0x27e7fcu: goto label_27e7fc;
        case 0x27e808u: goto label_27e808;
        default: break;
    }

    ctx->pc = 0x27e7a8u;

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
    ctx->pc = 0x27e810u;
}
