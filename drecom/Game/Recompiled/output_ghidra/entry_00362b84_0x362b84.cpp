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

// Function: entry_00362b84
// Address: 0x362b84 - 0x362ba8
void entry_00362b84_0x362b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00362b84_0x362b84");
#endif

    switch (ctx->pc) {
        case 0x362b98u: goto label_362b98;
        default: break;
    }

    ctx->pc = 0x362b84u;

label_362b84:
    // 0x362b84: 0x2442ad30  addiu       $v0, $v0, -0x52D0
    ctx->pc = 0x362b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946096));
label_362b88:
    // 0x362b88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x362b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_362b8c:
    // 0x362b8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x362b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_362b90:
    // 0x362b90: 0x40f809  jalr        $v0
label_362b94:
    if (ctx->pc == 0x362B94u) {
        ctx->pc = 0x362B98u;
        goto label_362b98;
    }
    ctx->pc = 0x362B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x362B98u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362B90u, 0x362B98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x362B98u;
label_362b98:
    // 0x362b98: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x362b98u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_362b9c:
    // 0x362b9c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x362b9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_362ba0:
    // 0x362ba0: 0x3e00008  jr          $ra
label_362ba4:
    if (ctx->pc == 0x362BA4u) {
        ctx->pc = 0x362BA8u;
        goto label_fallthrough_0x362ba0;
    }
    ctx->pc = 0x362BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x362ba0:
    ctx->pc = 0x362BA8u;
}
