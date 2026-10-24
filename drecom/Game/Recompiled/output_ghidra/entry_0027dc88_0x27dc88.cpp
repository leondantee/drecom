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

// Function: entry_0027dc88
// Address: 0x27dc88 - 0x27dcb8
void entry_0027dc88_0x27dc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027dc88_0x27dc88");
#endif

    switch (ctx->pc) {
        case 0x27dcacu: goto label_27dcac;
        default: break;
    }

    ctx->pc = 0x27dc88u;

    // 0x27dc88: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27dc88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27dc8c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27dc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27dc90: 0x24420f50  addiu       $v0, $v0, 0xF50
    ctx->pc = 0x27dc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3920));
    // 0x27dc94: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27dc94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27dc98: 0x24047400  addiu       $a0, $zero, 0x7400
    ctx->pc = 0x27dc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29696));
    // 0x27dc9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27dc9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27dca0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27dca0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27dca4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27DCA4u;
    SET_GPR_U32(ctx, 31, 0x27DCACu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27DCA4u, 0x27DCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DCACu;
label_27dcac:
    // 0x27dcac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27dcacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27dcb0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27DCB0u;
    SET_GPR_U32(ctx, 31, 0x27DCB8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27DCB0u, 0x27DCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DCB8u;
}
