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

// Function: entry_002f67d0
// Address: 0x2f67d0 - 0x2f67f4
void entry_002f67d0_0x2f67d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f67d0_0x2f67d0");
#endif

    switch (ctx->pc) {
        case 0x2f67e4u: goto label_2f67e4;
        default: break;
    }

    ctx->pc = 0x2f67d0u;

label_2f67d0:
    // 0x2f67d0: 0x24428f98  addiu       $v0, $v0, -0x7068
    ctx->pc = 0x2f67d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938520));
label_2f67d4:
    // 0x2f67d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f67d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f67d8:
    // 0x2f67d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f67d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f67dc:
    // 0x2f67dc: 0x40f809  jalr        $v0
label_2f67e0:
    if (ctx->pc == 0x2F67E0u) {
        ctx->pc = 0x2F67E4u;
        goto label_2f67e4;
    }
    ctx->pc = 0x2F67DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F67E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F67DCu, 0x2F67E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F67E4u;
label_2f67e4:
    // 0x2f67e4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2f67e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f67e8:
    // 0x2f67e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2f67e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2f67ec:
    // 0x2f67ec: 0x3e00008  jr          $ra
label_2f67f0:
    if (ctx->pc == 0x2F67F0u) {
        ctx->pc = 0x2F67F4u;
        goto label_fallthrough_0x2f67ec;
    }
    ctx->pc = 0x2F67ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F67ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f67ec:
    ctx->pc = 0x2F67F4u;
}
