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

// Function: entry_00271700
// Address: 0x271700 - 0x271760
void entry_00271700_0x271700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00271700_0x271700");
#endif

    switch (ctx->pc) {
        case 0x271710u: goto label_271710;
        case 0x271720u: goto label_271720;
        case 0x271730u: goto label_271730;
        case 0x271740u: goto label_271740;
        case 0x271750u: goto label_271750;
        default: break;
    }

    ctx->pc = 0x271700u;

    // 0x271700: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x271700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271704: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x271704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271708: 0xc09c6a0  jal         func_271A80
    ctx->pc = 0x271708u;
    SET_GPR_U32(ctx, 31, 0x271710u);
    ctx->pc = 0x271A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271A80u, 0x271708u, 0x271710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271710u;
label_271710:
    // 0x271710: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x271710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x271714: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x271714u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x271718: 0xc09c6a0  jal         func_271A80
    ctx->pc = 0x271718u;
    SET_GPR_U32(ctx, 31, 0x271720u);
    ctx->pc = 0x271A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271A80u, 0x271718u, 0x271720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271720u;
label_271720:
    // 0x271720: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x271720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x271724: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x271724u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x271728: 0xc09c6a0  jal         func_271A80
    ctx->pc = 0x271728u;
    SET_GPR_U32(ctx, 31, 0x271730u);
    ctx->pc = 0x271A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271A80u, 0x271728u, 0x271730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271730u;
label_271730:
    // 0x271730: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x271730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271734: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x271734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271738: 0xc09c6ec  jal         func_271BB0
    ctx->pc = 0x271738u;
    SET_GPR_U32(ctx, 31, 0x271740u);
    ctx->pc = 0x271BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271BB0u, 0x271738u, 0x271740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271740u;
label_271740:
    // 0x271740: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x271740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x271744: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x271744u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x271748: 0xc09c6ec  jal         func_271BB0
    ctx->pc = 0x271748u;
    SET_GPR_U32(ctx, 31, 0x271750u);
    ctx->pc = 0x271BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271BB0u, 0x271748u, 0x271750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271750u;
label_271750:
    // 0x271750: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x271750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x271754: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x271754u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x271758: 0xc09c6ec  jal         func_271BB0
    ctx->pc = 0x271758u;
    SET_GPR_U32(ctx, 31, 0x271760u);
    ctx->pc = 0x271BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271BB0u, 0x271758u, 0x271760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271760u;
}
