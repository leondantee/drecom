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

// Function: entry_0027e8a8
// Address: 0x27e8a8 - 0x27e8f0
void entry_0027e8a8_0x27e8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027e8a8_0x27e8a8");
#endif

    switch (ctx->pc) {
        case 0x27e8dcu: goto label_27e8dc;
        case 0x27e8e8u: goto label_27e8e8;
        default: break;
    }

    ctx->pc = 0x27e8a8u;

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
    ctx->pc = 0x27e8f0u;
}
