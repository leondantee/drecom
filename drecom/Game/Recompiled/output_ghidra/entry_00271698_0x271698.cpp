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

// Function: entry_00271698
// Address: 0x271698 - 0x271700
void entry_00271698_0x271698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00271698_0x271698");
#endif

    switch (ctx->pc) {
        case 0x2716a8u: goto label_2716a8;
        case 0x2716b8u: goto label_2716b8;
        case 0x2716c8u: goto label_2716c8;
        case 0x2716d8u: goto label_2716d8;
        case 0x2716e8u: goto label_2716e8;
        case 0x2716f8u: goto label_2716f8;
        default: break;
    }

    ctx->pc = 0x271698u;

    // 0x271698: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x271698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27169c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27169cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2716a0: 0xc09c6a0  jal         func_271A80
    ctx->pc = 0x2716A0u;
    SET_GPR_U32(ctx, 31, 0x2716A8u);
    ctx->pc = 0x271A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271A80u, 0x2716A0u, 0x2716A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2716A8u;
label_2716a8:
    // 0x2716a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2716a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2716ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2716acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2716b0: 0xc09c6a0  jal         func_271A80
    ctx->pc = 0x2716B0u;
    SET_GPR_U32(ctx, 31, 0x2716B8u);
    ctx->pc = 0x271A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271A80u, 0x2716B0u, 0x2716B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2716B8u;
label_2716b8:
    // 0x2716b8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2716b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2716bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2716bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2716c0: 0xc09c6a0  jal         func_271A80
    ctx->pc = 0x2716C0u;
    SET_GPR_U32(ctx, 31, 0x2716C8u);
    ctx->pc = 0x271A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271A80u, 0x2716C0u, 0x2716C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2716C8u;
label_2716c8:
    // 0x2716c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2716c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2716cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2716ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2716d0: 0xc09c6ec  jal         func_271BB0
    ctx->pc = 0x2716D0u;
    SET_GPR_U32(ctx, 31, 0x2716D8u);
    ctx->pc = 0x271BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271BB0u, 0x2716D0u, 0x2716D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2716D8u;
label_2716d8:
    // 0x2716d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2716d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2716dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2716dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2716e0: 0xc09c6ec  jal         func_271BB0
    ctx->pc = 0x2716E0u;
    SET_GPR_U32(ctx, 31, 0x2716E8u);
    ctx->pc = 0x271BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271BB0u, 0x2716E0u, 0x2716E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2716E8u;
label_2716e8:
    // 0x2716e8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2716e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2716ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2716ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2716f0: 0xc09c6ec  jal         func_271BB0
    ctx->pc = 0x2716F0u;
    SET_GPR_U32(ctx, 31, 0x2716F8u);
    ctx->pc = 0x271BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271BB0u, 0x2716F0u, 0x2716F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2716F8u;
label_2716f8:
    // 0x2716f8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2716F8u;
    {
        const bool branch_taken_0x2716f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2716f8) {
            ctx->pc = 0x271760u;
            return;
        }
    }
    ctx->pc = 0x271700u;
}
