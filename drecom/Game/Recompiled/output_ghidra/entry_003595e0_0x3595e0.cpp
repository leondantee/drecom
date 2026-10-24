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

// Function: entry_003595e0
// Address: 0x3595e0 - 0x359604
void entry_003595e0_0x3595e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003595e0_0x3595e0");
#endif

    switch (ctx->pc) {
        case 0x3595f4u: goto label_3595f4;
        default: break;
    }

    ctx->pc = 0x3595e0u;

label_3595e0:
    // 0x3595e0: 0x2442a7e0  addiu       $v0, $v0, -0x5820
    ctx->pc = 0x3595e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944736));
label_3595e4:
    // 0x3595e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3595e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3595e8:
    // 0x3595e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3595e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3595ec:
    // 0x3595ec: 0x40f809  jalr        $v0
label_3595f0:
    if (ctx->pc == 0x3595F0u) {
        ctx->pc = 0x3595F4u;
        goto label_3595f4;
    }
    ctx->pc = 0x3595ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3595F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3595ECu, 0x3595F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3595F4u;
label_3595f4:
    // 0x3595f4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3595f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3595f8:
    // 0x3595f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3595f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3595fc:
    // 0x3595fc: 0x3e00008  jr          $ra
label_359600:
    if (ctx->pc == 0x359600u) {
        ctx->pc = 0x359604u;
        goto label_fallthrough_0x3595fc;
    }
    ctx->pc = 0x3595FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3595FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3595fc:
    ctx->pc = 0x359604u;
}
