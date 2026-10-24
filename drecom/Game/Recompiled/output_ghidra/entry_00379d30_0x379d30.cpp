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

// Function: entry_00379d30
// Address: 0x379d30 - 0x379d58
void entry_00379d30_0x379d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00379d30_0x379d30");
#endif

    ctx->pc = 0x379d30u;

label_379d30:
    // 0x379d30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x379d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_379d34:
    // 0x379d34: 0xa2026608  sb          $v0, 0x6608($s0)
    ctx->pc = 0x379d34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26120), (uint8_t)GPR_U32(ctx, 2));
label_379d38:
    // 0x379d38: 0x8e025dcc  lw          $v0, 0x5DCC($s0)
    ctx->pc = 0x379d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24012)));
label_379d3c:
    // 0x379d3c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x379d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_379d40:
    // 0x379d40: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x379d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_379d44:
    // 0x379d44: 0x2442b9b0  addiu       $v0, $v0, -0x4650
    ctx->pc = 0x379d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949296));
label_379d48:
    // 0x379d48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x379d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_379d4c:
    // 0x379d4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x379d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_379d50:
    // 0x379d50: 0x40f809  jalr        $v0
label_379d54:
    if (ctx->pc == 0x379D54u) {
        ctx->pc = 0x379D58u;
        goto label_fallthrough_0x379d50;
    }
    ctx->pc = 0x379D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x379D58u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379D50u, 0x379D58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x379d50:
    ctx->pc = 0x379D58u;
}
