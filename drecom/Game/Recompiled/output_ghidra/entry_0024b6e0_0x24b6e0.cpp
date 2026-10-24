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

// Function: entry_0024b6e0
// Address: 0x24b6e0 - 0x24b704
void entry_0024b6e0_0x24b6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024b6e0_0x24b6e0");
#endif

    switch (ctx->pc) {
        case 0x24b6f4u: goto label_24b6f4;
        default: break;
    }

    ctx->pc = 0x24b6e0u;

label_24b6e0:
    // 0x24b6e0: 0x2442b5c0  addiu       $v0, $v0, -0x4A40
    ctx->pc = 0x24b6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948288));
label_24b6e4:
    // 0x24b6e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24b6e8:
    // 0x24b6e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24b6ec:
    // 0x24b6ec: 0x40f809  jalr        $v0
label_24b6f0:
    if (ctx->pc == 0x24B6F0u) {
        ctx->pc = 0x24B6F4u;
        goto label_24b6f4;
    }
    ctx->pc = 0x24B6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24B6F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B6ECu, 0x24B6F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24B6F4u;
label_24b6f4:
    // 0x24b6f4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x24b6f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24b6f8:
    // 0x24b6f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24b6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_24b6fc:
    // 0x24b6fc: 0x3e00008  jr          $ra
label_24b700:
    if (ctx->pc == 0x24B700u) {
        ctx->pc = 0x24B704u;
        goto label_fallthrough_0x24b6fc;
    }
    ctx->pc = 0x24B6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24b6fc:
    ctx->pc = 0x24B704u;
}
