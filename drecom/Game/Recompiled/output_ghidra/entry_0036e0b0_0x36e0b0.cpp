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

// Function: entry_0036e0b0
// Address: 0x36e0b0 - 0x36e0d4
void entry_0036e0b0_0x36e0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036e0b0_0x36e0b0");
#endif

    switch (ctx->pc) {
        case 0x36e0c4u: goto label_36e0c4;
        default: break;
    }

    ctx->pc = 0x36e0b0u;

label_36e0b0:
    // 0x36e0b0: 0x2442b390  addiu       $v0, $v0, -0x4C70
    ctx->pc = 0x36e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947728));
label_36e0b4:
    // 0x36e0b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36e0b8:
    // 0x36e0b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36e0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36e0bc:
    // 0x36e0bc: 0x40f809  jalr        $v0
label_36e0c0:
    if (ctx->pc == 0x36E0C0u) {
        ctx->pc = 0x36E0C4u;
        goto label_36e0c4;
    }
    ctx->pc = 0x36E0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36E0C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E0BCu, 0x36E0C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36E0C4u;
label_36e0c4:
    // 0x36e0c4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36e0c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36e0c8:
    // 0x36e0c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36e0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_36e0cc:
    // 0x36e0cc: 0x3e00008  jr          $ra
label_36e0d0:
    if (ctx->pc == 0x36E0D0u) {
        ctx->pc = 0x36E0D4u;
        goto label_fallthrough_0x36e0cc;
    }
    ctx->pc = 0x36E0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36e0cc:
    ctx->pc = 0x36E0D4u;
}
