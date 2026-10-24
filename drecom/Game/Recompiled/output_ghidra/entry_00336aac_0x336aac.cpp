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

// Function: entry_00336aac
// Address: 0x336aac - 0x336adc
void entry_00336aac_0x336aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00336aac_0x336aac");
#endif

    switch (ctx->pc) {
        case 0x336ab4u: goto label_336ab4;
        default: break;
    }

    ctx->pc = 0x336aacu;

    // 0x336aac: 0xc0a1328  jal         func_284CA0
    ctx->pc = 0x336AACu;
    SET_GPR_U32(ctx, 31, 0x336AB4u);
    ctx->pc = 0x284CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284CA0u, 0x336AACu, 0x336AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336AB4u;
label_336ab4:
    // 0x336ab4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336ab8: 0xa2026625  sb          $v0, 0x6625($s0)
    ctx->pc = 0x336ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26149), (uint8_t)GPR_U32(ctx, 2));
    // 0x336abc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336ac0: 0xae025dc0  sw          $v0, 0x5DC0($s0)
    ctx->pc = 0x336ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24000), GPR_U32(ctx, 2));
    // 0x336ac4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x336ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x336ac8: 0xae025dc4  sw          $v0, 0x5DC4($s0)
    ctx->pc = 0x336ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24004), GPR_U32(ctx, 2));
    // 0x336acc: 0xae005dc8  sw          $zero, 0x5DC8($s0)
    ctx->pc = 0x336accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 0));
    // 0x336ad0: 0xae005dcc  sw          $zero, 0x5DCC($s0)
    ctx->pc = 0x336ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24012), GPR_U32(ctx, 0));
    // 0x336ad4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x336AD4u;
    {
        const bool branch_taken_0x336ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336ad4) {
            ctx->pc = 0x336B04u;
            return;
        }
    }
    ctx->pc = 0x336ADCu;
}
