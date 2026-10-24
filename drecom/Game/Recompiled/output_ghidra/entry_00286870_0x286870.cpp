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

// Function: entry_00286870
// Address: 0x286870 - 0x2868c4
void entry_00286870_0x286870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00286870_0x286870");
#endif

    switch (ctx->pc) {
        case 0x2868a4u: goto label_2868a4;
        default: break;
    }

    ctx->pc = 0x286870u;

    // 0x286870: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x286870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x286874: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x286874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x286878: 0x3c071e00  lui         $a3, 0x1E00
    ctx->pc = 0x286878u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)7680 << 16));
    // 0x28687c: 0x34e8190a  ori         $t0, $a3, 0x190A
    ctx->pc = 0x28687cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)6410);
    // 0x286880: 0x1033025  or          $a2, $t0, $v1
    ctx->pc = 0x286880u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x286884: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x286884u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x286888: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x286888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x28688c: 0x24461680  addiu       $a2, $v0, 0x1680
    ctx->pc = 0x28688cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5760));
    // 0x286890: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x286890u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x286894: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x286894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x286898: 0x8c262030  lw          $a2, 0x2030($at)
    ctx->pc = 0x286898u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x622030u));
    // 0x28689c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x28689Cu;
    SET_GPR_U32(ctx, 31, 0x2868A4u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x28689Cu, 0x2868A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2868A4u;
label_2868a4:
    // 0x2868a4: 0x8e475dc8  lw          $a3, 0x5DC8($s2)
    ctx->pc = 0x2868a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24008)));
    // 0x2868a8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2868a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2868ac: 0x14e60005  bne         $a3, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2868ACu;
    {
        const bool branch_taken_0x2868ac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x2868ac) {
            ctx->pc = 0x2868C4u;
            return;
        }
    }
    ctx->pc = 0x2868B4u;
    // 0x2868b4: 0x8e435dcc  lw          $v1, 0x5DCC($s2)
    ctx->pc = 0x2868b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24012)));
    // 0x2868b8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2868b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2868bc: 0x1066000b  beq         $v1, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x2868BCu;
    {
        const bool branch_taken_0x2868bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x2868bc) {
            ctx->pc = 0x2868ECu;
            return;
        }
    }
    ctx->pc = 0x2868C4u;
}
