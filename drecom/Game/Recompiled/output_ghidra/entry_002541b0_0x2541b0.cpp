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

// Function: entry_002541b0
// Address: 0x2541b0 - 0x2541d4
void entry_002541b0_0x2541b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002541b0_0x2541b0");
#endif

    switch (ctx->pc) {
        case 0x2541c4u: goto label_2541c4;
        default: break;
    }

    ctx->pc = 0x2541b0u;

label_2541b0:
    // 0x2541b0: 0x2442b760  addiu       $v0, $v0, -0x48A0
    ctx->pc = 0x2541b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948704));
label_2541b4:
    // 0x2541b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2541b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2541b8:
    // 0x2541b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2541b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2541bc:
    // 0x2541bc: 0x40f809  jalr        $v0
label_2541c0:
    if (ctx->pc == 0x2541C0u) {
        ctx->pc = 0x2541C4u;
        goto label_2541c4;
    }
    ctx->pc = 0x2541BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2541C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2541BCu, 0x2541C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2541C4u;
label_2541c4:
    // 0x2541c4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2541c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2541c8:
    // 0x2541c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2541c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2541cc:
    // 0x2541cc: 0x3e00008  jr          $ra
label_2541d0:
    if (ctx->pc == 0x2541D0u) {
        ctx->pc = 0x2541D4u;
        goto label_fallthrough_0x2541cc;
    }
    ctx->pc = 0x2541CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2541CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2541cc:
    ctx->pc = 0x2541D4u;
}
