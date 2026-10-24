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

// Function: entry_002771a0
// Address: 0x2771a0 - 0x2771d8
void entry_002771a0_0x2771a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002771a0_0x2771a0");
#endif

    switch (ctx->pc) {
        case 0x2771c4u: goto label_2771c4;
        case 0x2771d0u: goto label_2771d0;
        default: break;
    }

    ctx->pc = 0x2771a0u;

    // 0x2771a0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2771a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2771a4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2771a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2771a8: 0x2442d270  addiu       $v0, $v0, -0x2D90
    ctx->pc = 0x2771a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955632));
    // 0x2771ac: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2771acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2771b0: 0x24042602  addiu       $a0, $zero, 0x2602
    ctx->pc = 0x2771b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9730));
    // 0x2771b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2771b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2771b8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2771b8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2771bc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2771BCu;
    SET_GPR_U32(ctx, 31, 0x2771C4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2771BCu, 0x2771C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2771C4u;
label_2771c4:
    // 0x2771c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2771c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2771c8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2771C8u;
    SET_GPR_U32(ctx, 31, 0x2771D0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2771C8u, 0x2771D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2771D0u;
label_2771d0:
    // 0x2771d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2771d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2771d4: 0x0  nop
    ctx->pc = 0x2771d4u;
    // NOP
    ctx->pc = 0x2771d8u;
}
