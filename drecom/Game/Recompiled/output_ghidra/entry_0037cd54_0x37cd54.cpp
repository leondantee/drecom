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

// Function: entry_0037cd54
// Address: 0x37cd54 - 0x37cd78
void entry_0037cd54_0x37cd54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037cd54_0x37cd54");
#endif

    switch (ctx->pc) {
        case 0x37cd68u: goto label_37cd68;
        default: break;
    }

    ctx->pc = 0x37cd54u;

label_37cd54:
    // 0x37cd54: 0x2442ba90  addiu       $v0, $v0, -0x4570
    ctx->pc = 0x37cd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949520));
label_37cd58:
    // 0x37cd58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37cd5c:
    // 0x37cd5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37cd60:
    // 0x37cd60: 0x40f809  jalr        $v0
label_37cd64:
    if (ctx->pc == 0x37CD64u) {
        ctx->pc = 0x37CD68u;
        goto label_37cd68;
    }
    ctx->pc = 0x37CD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37CD68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CD60u, 0x37CD68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37CD68u;
label_37cd68:
    // 0x37cd68: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x37cd68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37cd6c:
    // 0x37cd6c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x37cd6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_37cd70:
    // 0x37cd70: 0x3e00008  jr          $ra
label_37cd74:
    if (ctx->pc == 0x37CD74u) {
        ctx->pc = 0x37CD78u;
        goto label_fallthrough_0x37cd70;
    }
    ctx->pc = 0x37CD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CD70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x37cd70:
    ctx->pc = 0x37CD78u;
}
