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

// Function: entry_0013938c
// Address: 0x13938c - 0x1393b0
void entry_0013938c_0x13938c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013938c_0x13938c");
#endif

    switch (ctx->pc) {
        case 0x1393a0u: goto label_1393a0;
        default: break;
    }

    ctx->pc = 0x13938cu;

label_13938c:
    // 0x13938c: 0x244250b0  addiu       $v0, $v0, 0x50B0
    ctx->pc = 0x13938cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20656));
label_139390:
    // 0x139390: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x139390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_139394:
    // 0x139394: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x139394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_139398:
    // 0x139398: 0x40f809  jalr        $v0
label_13939c:
    if (ctx->pc == 0x13939Cu) {
        ctx->pc = 0x1393A0u;
        goto label_1393a0;
    }
    ctx->pc = 0x139398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1393A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139398u, 0x1393A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1393A0u;
label_1393a0:
    // 0x1393a0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1393a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1393a4:
    // 0x1393a4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1393a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1393a8:
    // 0x1393a8: 0x3e00008  jr          $ra
label_1393ac:
    if (ctx->pc == 0x1393ACu) {
        ctx->pc = 0x1393B0u;
        goto label_fallthrough_0x1393a8;
    }
    ctx->pc = 0x1393A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1393A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1393a8:
    ctx->pc = 0x1393B0u;
}
