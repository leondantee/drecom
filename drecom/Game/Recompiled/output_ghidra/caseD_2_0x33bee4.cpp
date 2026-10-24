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

// Function: caseD_2
// Address: 0x33bee4 - 0x33bf10
void caseD_2_0x33bee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x33bee4");
#endif

    switch (ctx->pc) {
        case 0x33bef4u: goto label_33bef4;
        default: break;
    }

    ctx->pc = 0x33bee4u;

    // 0x33bee4: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33bee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33bee8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x33bee8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33beec: 0xc0cf4cc  jal         func_33D330
    ctx->pc = 0x33BEECu;
    SET_GPR_U32(ctx, 31, 0x33BEF4u);
    ctx->pc = 0x33D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D330u, 0x33BEECu, 0x33BEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BEF4u;
label_33bef4:
    // 0x33bef4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x33bef4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33bef8: 0x106000dc  beqz        $v1, . + 4 + (0xDC << 2)
    ctx->pc = 0x33BEF8u;
    {
        const bool branch_taken_0x33bef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bef8) {
            ctx->pc = 0x33C26Cu;
            return;
        }
    }
    ctx->pc = 0x33BF00u;
    // 0x33bf00: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x33bf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33bf04: 0xa2040001  sb          $a0, 0x1($s0)
    ctx->pc = 0x33bf04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x33bf08: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x33BF08u;
    {
        const bool branch_taken_0x33bf08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bf08) {
            ctx->pc = 0x33C26Cu;
            return;
        }
    }
    ctx->pc = 0x33BF10u;
}
