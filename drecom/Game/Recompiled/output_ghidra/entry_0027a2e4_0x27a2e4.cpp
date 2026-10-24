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

// Function: entry_0027a2e4
// Address: 0x27a2e4 - 0x27a318
void entry_0027a2e4_0x27a2e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027a2e4_0x27a2e4");
#endif

    switch (ctx->pc) {
        case 0x27a308u: goto label_27a308;
        case 0x27a314u: goto label_27a314;
        default: break;
    }

    ctx->pc = 0x27a2e4u;

    // 0x27a2e4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27a2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27a2e8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27a2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27a2ec: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x27a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x27a2f0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27a2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27a2f4: 0x24047407  addiu       $a0, $zero, 0x7407
    ctx->pc = 0x27a2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29703));
    // 0x27a2f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27a2f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27a2fc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27a2fcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27a300: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27A300u;
    SET_GPR_U32(ctx, 31, 0x27A308u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27A300u, 0x27A308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A308u;
label_27a308:
    // 0x27a308: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27a308u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27a30c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27A30Cu;
    SET_GPR_U32(ctx, 31, 0x27A314u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27A30Cu, 0x27A314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A314u;
label_27a314:
    // 0x27a314: 0x0  nop
    ctx->pc = 0x27a314u;
    // NOP
    ctx->pc = 0x27a318u;
}
