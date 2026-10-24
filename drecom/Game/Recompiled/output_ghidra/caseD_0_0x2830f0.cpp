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

// Function: caseD_0
// Address: 0x2830f0 - 0x283128
void caseD_0_0x2830f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x2830f0");
#endif

    switch (ctx->pc) {
        case 0x283114u: goto label_283114;
        case 0x283120u: goto label_283120;
        default: break;
    }

    ctx->pc = 0x2830f0u;

    // 0x2830f0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2830f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2830f4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2830f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2830f8: 0x24424e30  addiu       $v0, $v0, 0x4E30
    ctx->pc = 0x2830f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20016));
    // 0x2830fc: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2830fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x283100: 0x24045a03  addiu       $a0, $zero, 0x5A03
    ctx->pc = 0x283100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23043));
    // 0x283104: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x283104u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x283108: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x283108u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28310c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28310Cu;
    SET_GPR_U32(ctx, 31, 0x283114u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28310Cu, 0x283114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283114u;
label_283114:
    // 0x283114: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x283114u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x283118: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x283118u;
    SET_GPR_U32(ctx, 31, 0x283120u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x283118u, 0x283120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283120u;
label_283120:
    // 0x283120: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x283120u;
    {
        const bool branch_taken_0x283120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283120) {
            ctx->pc = 0x2831E8u;
            return;
        }
    }
    ctx->pc = 0x283128u;
}
