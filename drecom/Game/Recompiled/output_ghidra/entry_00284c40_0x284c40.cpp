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

// Function: entry_00284c40
// Address: 0x284c40 - 0x284c68
void entry_00284c40_0x284c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00284c40_0x284c40");
#endif

    ctx->pc = 0x284c40u;

label_284c40:
    // 0x284c40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x284c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_284c44:
    // 0x284c44: 0xa2026608  sb          $v0, 0x6608($s0)
    ctx->pc = 0x284c44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26120), (uint8_t)GPR_U32(ctx, 2));
label_284c48:
    // 0x284c48: 0x8e025dcc  lw          $v0, 0x5DCC($s0)
    ctx->pc = 0x284c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24012)));
label_284c4c:
    // 0x284c4c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x284c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_284c50:
    // 0x284c50: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x284c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_284c54:
    // 0x284c54: 0x24426150  addiu       $v0, $v0, 0x6150
    ctx->pc = 0x284c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
label_284c58:
    // 0x284c58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x284c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_284c5c:
    // 0x284c5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x284c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_284c60:
    // 0x284c60: 0x40f809  jalr        $v0
label_284c64:
    if (ctx->pc == 0x284C64u) {
        ctx->pc = 0x284C68u;
        goto label_fallthrough_0x284c60;
    }
    ctx->pc = 0x284C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x284C68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284C60u, 0x284C68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x284c60:
    ctx->pc = 0x284C68u;
}
