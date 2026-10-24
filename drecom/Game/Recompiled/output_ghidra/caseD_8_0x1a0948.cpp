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

// Function: caseD_8
// Address: 0x1a0948 - 0x1a0974
void caseD_8_0x1a0948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1a0948");
#endif

    switch (ctx->pc) {
        case 0x1a0958u: goto label_1a0958;
        default: break;
    }

    ctx->pc = 0x1a0948u;

    // 0x1a0948: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a0948u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a094c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a094cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a0950: 0xc043168  jal         func_10C5A0
    ctx->pc = 0x1A0950u;
    SET_GPR_U32(ctx, 31, 0x1A0958u);
    ctx->pc = 0x10C5A0u;
    {
        ctx->pc = 0x1A0958u;
        ps2_stubs::scePadGetReqState(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A0958u) { return; }
    ctx->pc = 0x1A0958u;
label_1a0958:
    // 0x1a0958: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A0958u;
    {
        const bool branch_taken_0x1a0958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0958) {
            ctx->pc = 0x1A0988u;
            return;
        }
    }
    ctx->pc = 0x1A0960u;
    // 0x1a0960: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a0960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0964: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0964u;
    {
        const bool branch_taken_0x1a0964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a0964) {
            ctx->pc = 0x1A0974u;
            return;
        }
    }
    ctx->pc = 0x1A096Cu;
    // 0x1a096c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1A096Cu;
    {
        const bool branch_taken_0x1a096c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a096c) {
            ctx->pc = 0x1A09DCu;
            return;
        }
    }
    ctx->pc = 0x1A0974u;
}
