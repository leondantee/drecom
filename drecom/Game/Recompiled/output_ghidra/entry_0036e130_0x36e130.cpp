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

// Function: entry_0036e130
// Address: 0x36e130 - 0x36e154
void entry_0036e130_0x36e130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036e130_0x36e130");
#endif

    switch (ctx->pc) {
        case 0x36e144u: goto label_36e144;
        default: break;
    }

    ctx->pc = 0x36e130u;

label_36e130:
    // 0x36e130: 0x2442b3b0  addiu       $v0, $v0, -0x4C50
    ctx->pc = 0x36e130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947760));
label_36e134:
    // 0x36e134: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36e134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36e138:
    // 0x36e138: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36e138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36e13c:
    // 0x36e13c: 0x40f809  jalr        $v0
label_36e140:
    if (ctx->pc == 0x36E140u) {
        ctx->pc = 0x36E144u;
        goto label_36e144;
    }
    ctx->pc = 0x36E13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36E144u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E13Cu, 0x36E144u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36E144u;
label_36e144:
    // 0x36e144: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36e144u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36e148:
    // 0x36e148: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36e148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_36e14c:
    // 0x36e14c: 0x3e00008  jr          $ra
label_36e150:
    if (ctx->pc == 0x36E150u) {
        ctx->pc = 0x36E154u;
        goto label_fallthrough_0x36e14c;
    }
    ctx->pc = 0x36E14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36e14c:
    ctx->pc = 0x36E154u;
}
