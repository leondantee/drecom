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
// Address: 0x1a078c - 0x1a07b8
void caseD_3_0x1a078c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1a078c");
#endif

    switch (ctx->pc) {
        case 0x1a079cu: goto label_1a079c;
        default: break;
    }

    ctx->pc = 0x1a078cu;

    // 0x1a078c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a078cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a0790: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a0790u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a0794: 0xc043168  jal         func_10C5A0
    ctx->pc = 0x1A0794u;
    SET_GPR_U32(ctx, 31, 0x1A079Cu);
    ctx->pc = 0x10C5A0u;
    {
        ctx->pc = 0x1A079Cu;
        ps2_stubs::scePadGetReqState(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A079Cu) { return; }
    ctx->pc = 0x1A079Cu;
label_1a079c:
    // 0x1a079c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A079Cu;
    {
        const bool branch_taken_0x1a079c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a079c) {
            ctx->pc = 0x1A07CCu;
            return;
        }
    }
    ctx->pc = 0x1A07A4u;
    // 0x1a07a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a07a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a07a8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A07A8u;
    {
        const bool branch_taken_0x1a07a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a07a8) {
            ctx->pc = 0x1A07B8u;
            return;
        }
    }
    ctx->pc = 0x1A07B0u;
    // 0x1a07b0: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x1A07B0u;
    {
        const bool branch_taken_0x1a07b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a07b0) {
            ctx->pc = 0x1A09DCu;
            return;
        }
    }
    ctx->pc = 0x1A07B8u;
}
