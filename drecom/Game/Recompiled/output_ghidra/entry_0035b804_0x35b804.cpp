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

// Function: entry_0035b804
// Address: 0x35b804 - 0x35b828
void entry_0035b804_0x35b804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035b804_0x35b804");
#endif

    switch (ctx->pc) {
        case 0x35b818u: goto label_35b818;
        default: break;
    }

    ctx->pc = 0x35b804u;

label_35b804:
    // 0x35b804: 0x2442a9f8  addiu       $v0, $v0, -0x5608
    ctx->pc = 0x35b804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945272));
label_35b808:
    // 0x35b808: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35b808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35b80c:
    // 0x35b80c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35b80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35b810:
    // 0x35b810: 0x40f809  jalr        $v0
label_35b814:
    if (ctx->pc == 0x35B814u) {
        ctx->pc = 0x35B818u;
        goto label_35b818;
    }
    ctx->pc = 0x35B810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35B818u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B810u, 0x35B818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35B818u;
label_35b818:
    // 0x35b818: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35b818u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35b81c:
    // 0x35b81c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35b81cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35b820:
    // 0x35b820: 0x3e00008  jr          $ra
label_35b824:
    if (ctx->pc == 0x35B824u) {
        ctx->pc = 0x35B828u;
        goto label_fallthrough_0x35b820;
    }
    ctx->pc = 0x35B820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35b820:
    ctx->pc = 0x35B828u;
}
