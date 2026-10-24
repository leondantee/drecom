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

// Function: caseD_3
// Address: 0x2605a4 - 0x2605d8
void caseD_3_0x2605a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x2605a4");
#endif

    switch (ctx->pc) {
        case 0x2605d0u: goto label_2605d0;
        default: break;
    }

    ctx->pc = 0x2605a4u;

    // 0x2605a4: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x2605a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2605a8: 0x103180  sll         $a2, $s0, 6
    ctx->pc = 0x2605a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x2605ac: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x2605acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x2605b0: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x2605b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2605b4: 0x24850030  addiu       $a1, $a0, 0x30
    ctx->pc = 0x2605b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2605b8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2605b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2605bc: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x2605bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2605c0: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2605c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2605c4: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x2605c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2605c8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x2605C8u;
    SET_GPR_U32(ctx, 31, 0x2605D0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2605C8u, 0x2605D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2605D0u;
label_2605d0:
    // 0x2605d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2605D0u;
    {
        const bool branch_taken_0x2605d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2605d0) {
            ctx->pc = 0x2605FCu;
            return;
        }
    }
    ctx->pc = 0x2605D8u;
}
