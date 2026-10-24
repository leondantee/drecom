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

// Function: entry_00360a34
// Address: 0x360a34 - 0x360a58
void entry_00360a34_0x360a34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00360a34_0x360a34");
#endif

    switch (ctx->pc) {
        case 0x360a48u: goto label_360a48;
        default: break;
    }

    ctx->pc = 0x360a34u;

label_360a34:
    // 0x360a34: 0x2442ac30  addiu       $v0, $v0, -0x53D0
    ctx->pc = 0x360a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945840));
label_360a38:
    // 0x360a38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x360a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_360a3c:
    // 0x360a3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x360a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_360a40:
    // 0x360a40: 0x40f809  jalr        $v0
label_360a44:
    if (ctx->pc == 0x360A44u) {
        ctx->pc = 0x360A48u;
        goto label_360a48;
    }
    ctx->pc = 0x360A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x360A48u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360A40u, 0x360A48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x360A48u;
label_360a48:
    // 0x360a48: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x360a48u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_360a4c:
    // 0x360a4c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x360a4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_360a50:
    // 0x360a50: 0x3e00008  jr          $ra
label_360a54:
    if (ctx->pc == 0x360A54u) {
        ctx->pc = 0x360A58u;
        goto label_fallthrough_0x360a50;
    }
    ctx->pc = 0x360A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x360a50:
    ctx->pc = 0x360A58u;
}
