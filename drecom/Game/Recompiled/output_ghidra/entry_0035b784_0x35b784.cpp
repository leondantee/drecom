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

// Function: entry_0035b784
// Address: 0x35b784 - 0x35b7a8
void entry_0035b784_0x35b784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035b784_0x35b784");
#endif

    switch (ctx->pc) {
        case 0x35b798u: goto label_35b798;
        default: break;
    }

    ctx->pc = 0x35b784u;

label_35b784:
    // 0x35b784: 0x2442a9f0  addiu       $v0, $v0, -0x5610
    ctx->pc = 0x35b784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945264));
label_35b788:
    // 0x35b788: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35b788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35b78c:
    // 0x35b78c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35b790:
    // 0x35b790: 0x40f809  jalr        $v0
label_35b794:
    if (ctx->pc == 0x35B794u) {
        ctx->pc = 0x35B798u;
        goto label_35b798;
    }
    ctx->pc = 0x35B790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35B798u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B790u, 0x35B798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35B798u;
label_35b798:
    // 0x35b798: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35b798u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35b79c:
    // 0x35b79c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35b79cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35b7a0:
    // 0x35b7a0: 0x3e00008  jr          $ra
label_35b7a4:
    if (ctx->pc == 0x35B7A4u) {
        ctx->pc = 0x35B7A8u;
        goto label_fallthrough_0x35b7a0;
    }
    ctx->pc = 0x35B7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35b7a0:
    ctx->pc = 0x35B7A8u;
}
