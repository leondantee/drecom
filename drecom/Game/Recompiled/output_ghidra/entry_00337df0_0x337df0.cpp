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

// Function: entry_00337df0
// Address: 0x337df0 - 0x337e30
void entry_00337df0_0x337df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00337df0_0x337df0");
#endif

    switch (ctx->pc) {
        case 0x337df8u: goto label_337df8;
        default: break;
    }

    ctx->pc = 0x337df0u;

    // 0x337df0: 0xc0cc9a0  jal         func_332680
    ctx->pc = 0x337DF0u;
    SET_GPR_U32(ctx, 31, 0x337DF8u);
    ctx->pc = 0x332680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332680u, 0x337DF0u, 0x337DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337DF8u;
label_337df8:
    // 0x337df8: 0x8e025dd4  lw          $v0, 0x5DD4($s0)
    ctx->pc = 0x337df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24020)));
    // 0x337dfc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x337dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x337e00: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x337E00u;
    {
        const bool branch_taken_0x337e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x337e00) {
            ctx->pc = 0x337E30u;
            return;
        }
    }
    ctx->pc = 0x337E08u;
    // 0x337e08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x337e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337e0c: 0xae025dc0  sw          $v0, 0x5DC0($s0)
    ctx->pc = 0x337e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24000), GPR_U32(ctx, 2));
    // 0x337e10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x337e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337e14: 0xae065dc4  sw          $a2, 0x5DC4($s0)
    ctx->pc = 0x337e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24004), GPR_U32(ctx, 6));
    // 0x337e18: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x337e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x337e1c: 0xae025dc8  sw          $v0, 0x5DC8($s0)
    ctx->pc = 0x337e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 2));
    // 0x337e20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x337e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337e24: 0xae025dcc  sw          $v0, 0x5DCC($s0)
    ctx->pc = 0x337e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24012), GPR_U32(ctx, 2));
    // 0x337e28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x337e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x337e2c: 0xae025dd4  sw          $v0, 0x5DD4($s0)
    ctx->pc = 0x337e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24020), GPR_U32(ctx, 2));
    ctx->pc = 0x337e30u;
}
