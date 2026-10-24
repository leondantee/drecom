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

// Function: entry_00253c80
// Address: 0x253c80 - 0x253ca4
void entry_00253c80_0x253c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00253c80_0x253c80");
#endif

    switch (ctx->pc) {
        case 0x253c94u: goto label_253c94;
        default: break;
    }

    ctx->pc = 0x253c80u;

label_253c80:
    // 0x253c80: 0x2442b750  addiu       $v0, $v0, -0x48B0
    ctx->pc = 0x253c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948688));
label_253c84:
    // 0x253c84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x253c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_253c88:
    // 0x253c88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x253c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_253c8c:
    // 0x253c8c: 0x40f809  jalr        $v0
label_253c90:
    if (ctx->pc == 0x253C90u) {
        ctx->pc = 0x253C94u;
        goto label_253c94;
    }
    ctx->pc = 0x253C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x253C94u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253C8Cu, 0x253C94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x253C94u;
label_253c94:
    // 0x253c94: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x253c94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_253c98:
    // 0x253c98: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x253c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_253c9c:
    // 0x253c9c: 0x3e00008  jr          $ra
label_253ca0:
    if (ctx->pc == 0x253CA0u) {
        ctx->pc = 0x253CA4u;
        goto label_fallthrough_0x253c9c;
    }
    ctx->pc = 0x253C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x253c9c:
    ctx->pc = 0x253CA4u;
}
