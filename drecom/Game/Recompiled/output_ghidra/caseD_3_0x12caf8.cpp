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
// Address: 0x12caf8 - 0x12cb1c
void caseD_3_0x12caf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x12caf8");
#endif

    switch (ctx->pc) {
        case 0x12cb04u: goto label_12cb04;
        default: break;
    }

    ctx->pc = 0x12caf8u;

    // 0x12caf8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x12caf8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x12cafc: 0xc057634  jal         func_15D8D0
    ctx->pc = 0x12CAFCu;
    SET_GPR_U32(ctx, 31, 0x12CB04u);
    ctx->pc = 0x15D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D8D0u, 0x12CAFCu, 0x12CB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB04u;
label_12cb04:
    // 0x12cb04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12CB04u;
    {
        const bool branch_taken_0x12cb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cb04) {
            ctx->pc = 0x12CB1Cu;
            return;
        }
    }
    ctx->pc = 0x12CB0Cu;
    // 0x12cb0c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cb10: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x12cb10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x12cb14: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x12cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12cb18: 0xa4821278  sh          $v0, 0x1278($a0)
    ctx->pc = 0x12cb18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12cb1cu;
}
