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

// Function: entry_0026af14
// Address: 0x26af14 - 0x26af38
void entry_0026af14_0x26af14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026af14_0x26af14");
#endif

    switch (ctx->pc) {
        case 0x26af28u: goto label_26af28;
        default: break;
    }

    ctx->pc = 0x26af14u;

label_26af14:
    // 0x26af14: 0x2442be40  addiu       $v0, $v0, -0x41C0
    ctx->pc = 0x26af14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950464));
label_26af18:
    // 0x26af18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26af18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_26af1c:
    // 0x26af1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26af20:
    // 0x26af20: 0x40f809  jalr        $v0
label_26af24:
    if (ctx->pc == 0x26AF24u) {
        ctx->pc = 0x26AF28u;
        goto label_26af28;
    }
    ctx->pc = 0x26AF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26AF28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AF20u, 0x26AF28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26AF28u;
label_26af28:
    // 0x26af28: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x26af28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26af2c:
    // 0x26af2c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26af2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_26af30:
    // 0x26af30: 0x3e00008  jr          $ra
label_26af34:
    if (ctx->pc == 0x26AF34u) {
        ctx->pc = 0x26AF38u;
        goto label_fallthrough_0x26af30;
    }
    ctx->pc = 0x26AF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26af30:
    ctx->pc = 0x26AF38u;
}
