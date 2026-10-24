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
// Address: 0x1a0688 - 0x1a06bc
void caseD_0_0x1a0688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1a0688");
#endif

    switch (ctx->pc) {
        case 0x1a06a0u: goto label_1a06a0;
        default: break;
    }

    ctx->pc = 0x1a0688u;

    // 0x1a0688: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a0688u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a068c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a068cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a0690: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a0690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0694: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a0694u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a0698: 0xc04321a  jal         func_10C868
    ctx->pc = 0x1A0698u;
    SET_GPR_U32(ctx, 31, 0x1A06A0u);
    ctx->pc = 0x10C868u;
    {
        ctx->pc = 0x1A06A0u;
        ps2_stubs::scePadInfoMode(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A06A0u) { return; }
    ctx->pc = 0x1A06A0u;
label_1a06a0:
    // 0x1a06a0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1a06a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a06a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a06a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a06a8: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A06A8u;
    {
        const bool branch_taken_0x1a06a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a06a8) {
            ctx->pc = 0x1A06BCu;
            return;
        }
    }
    ctx->pc = 0x1A06B0u;
    // 0x1a06b0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1a06b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a06b4: 0x160200c9  bne         $s0, $v0, . + 4 + (0xC9 << 2)
    ctx->pc = 0x1A06B4u;
    {
        const bool branch_taken_0x1a06b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a06b4) {
            ctx->pc = 0x1A09DCu;
            return;
        }
    }
    ctx->pc = 0x1A06BCu;
}
