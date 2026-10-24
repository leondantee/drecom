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

// Function: entry_0027f398
// Address: 0x27f398 - 0x27f400
void entry_0027f398_0x27f398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027f398_0x27f398");
#endif

    switch (ctx->pc) {
        case 0x27f3bcu: goto label_27f3bc;
        case 0x27f3c8u: goto label_27f3c8;
        case 0x27f3ecu: goto label_27f3ec;
        case 0x27f3f8u: goto label_27f3f8;
        default: break;
    }

    ctx->pc = 0x27f398u;

    // 0x27f398: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27f398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27f39c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27f39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27f3a0: 0x24421e10  addiu       $v0, $v0, 0x1E10
    ctx->pc = 0x27f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7696));
    // 0x27f3a4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27f3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f3a8: 0x24045701  addiu       $a0, $zero, 0x5701
    ctx->pc = 0x27f3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22273));
    // 0x27f3ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27f3acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f3b0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27f3b0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f3b4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27F3B4u;
    SET_GPR_U32(ctx, 31, 0x27F3BCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27F3B4u, 0x27F3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F3BCu;
label_27f3bc:
    // 0x27f3bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27f3bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27f3c0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27F3C0u;
    SET_GPR_U32(ctx, 31, 0x27F3C8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27F3C0u, 0x27F3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F3C8u;
label_27f3c8:
    // 0x27f3c8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27f3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27f3cc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27f3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27f3d0: 0x24421e10  addiu       $v0, $v0, 0x1E10
    ctx->pc = 0x27f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7696));
    // 0x27f3d4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27f3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f3d8: 0x24047301  addiu       $a0, $zero, 0x7301
    ctx->pc = 0x27f3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29441));
    // 0x27f3dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27f3dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f3e0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27f3e0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f3e4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27F3E4u;
    SET_GPR_U32(ctx, 31, 0x27F3ECu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27F3E4u, 0x27F3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F3ECu;
label_27f3ec:
    // 0x27f3ec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27f3ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27f3f0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27F3F0u;
    SET_GPR_U32(ctx, 31, 0x27F3F8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27F3F0u, 0x27F3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F3F8u;
label_27f3f8:
    // 0x27f3f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27f3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27f3fc: 0x0  nop
    ctx->pc = 0x27f3fcu;
    // NOP
    ctx->pc = 0x27f400u;
}
