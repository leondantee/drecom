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

// Function: entry_002787e8
// Address: 0x2787e8 - 0x278820
void entry_002787e8_0x2787e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002787e8_0x2787e8");
#endif

    switch (ctx->pc) {
        case 0x27880cu: goto label_27880c;
        case 0x278818u: goto label_278818;
        default: break;
    }

    ctx->pc = 0x2787e8u;

    // 0x2787e8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2787e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2787ec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2787ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2787f0: 0x2442e1a0  addiu       $v0, $v0, -0x1E60
    ctx->pc = 0x2787f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959520));
    // 0x2787f4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2787f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2787f8: 0x24042602  addiu       $a0, $zero, 0x2602
    ctx->pc = 0x2787f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9730));
    // 0x2787fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2787fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x278800: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x278800u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x278804: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x278804u;
    SET_GPR_U32(ctx, 31, 0x27880Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x278804u, 0x27880Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27880Cu;
label_27880c:
    // 0x27880c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27880cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x278810: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x278810u;
    SET_GPR_U32(ctx, 31, 0x278818u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x278810u, 0x278818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278818u;
label_278818:
    // 0x278818: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x278818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27881c: 0x0  nop
    ctx->pc = 0x27881cu;
    // NOP
    ctx->pc = 0x278820u;
}
