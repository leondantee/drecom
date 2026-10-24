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

// Function: entry_00332620
// Address: 0x332620 - 0x332648
void entry_00332620_0x332620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00332620_0x332620");
#endif

    ctx->pc = 0x332620u;

label_332620:
    // 0x332620: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x332620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_332624:
    // 0x332624: 0xa2026608  sb          $v0, 0x6608($s0)
    ctx->pc = 0x332624u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26120), (uint8_t)GPR_U32(ctx, 2));
label_332628:
    // 0x332628: 0x8e025dcc  lw          $v0, 0x5DCC($s0)
    ctx->pc = 0x332628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24012)));
label_33262c:
    // 0x33262c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x33262cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_332630:
    // 0x332630: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x332630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_332634:
    // 0x332634: 0x24429920  addiu       $v0, $v0, -0x66E0
    ctx->pc = 0x332634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940960));
label_332638:
    // 0x332638: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x332638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33263c:
    // 0x33263c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33263cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_332640:
    // 0x332640: 0x40f809  jalr        $v0
label_332644:
    if (ctx->pc == 0x332644u) {
        ctx->pc = 0x332648u;
        goto label_fallthrough_0x332640;
    }
    ctx->pc = 0x332640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x332648u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332640u, 0x332648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x332640:
    ctx->pc = 0x332648u;
}
