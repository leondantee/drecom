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

// Function: caseD_5
// Address: 0x1a0828 - 0x1a0854
void caseD_5_0x1a0828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1a0828");
#endif

    switch (ctx->pc) {
        case 0x1a0838u: goto label_1a0838;
        default: break;
    }

    ctx->pc = 0x1a0828u;

    // 0x1a0828: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a0828u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a082c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a082cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a0830: 0xc043168  jal         func_10C5A0
    ctx->pc = 0x1A0830u;
    SET_GPR_U32(ctx, 31, 0x1A0838u);
    ctx->pc = 0x10C5A0u;
    {
        ctx->pc = 0x1A0838u;
        ps2_stubs::scePadGetReqState(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A0838u) { return; }
    ctx->pc = 0x1A0838u;
label_1a0838:
    // 0x1a0838: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A0838u;
    {
        const bool branch_taken_0x1a0838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0838) {
            ctx->pc = 0x1A0868u;
            return;
        }
    }
    ctx->pc = 0x1A0840u;
    // 0x1a0840: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a0840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0844: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0844u;
    {
        const bool branch_taken_0x1a0844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a0844) {
            ctx->pc = 0x1A0854u;
            return;
        }
    }
    ctx->pc = 0x1A084Cu;
    // 0x1a084c: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1A084Cu;
    {
        const bool branch_taken_0x1a084c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a084c) {
            ctx->pc = 0x1A09DCu;
            return;
        }
    }
    ctx->pc = 0x1A0854u;
}
