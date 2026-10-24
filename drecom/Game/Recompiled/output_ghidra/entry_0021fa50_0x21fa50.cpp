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

// Function: entry_0021fa50
// Address: 0x21fa50 - 0x21fa74
void entry_0021fa50_0x21fa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fa50_0x21fa50");
#endif

    switch (ctx->pc) {
        case 0x21fa64u: goto label_21fa64;
        default: break;
    }

    ctx->pc = 0x21fa50u;

label_21fa50:
    // 0x21fa50: 0x2442ac10  addiu       $v0, $v0, -0x53F0
    ctx->pc = 0x21fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945808));
label_21fa54:
    // 0x21fa54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21fa58:
    // 0x21fa58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21fa5c:
    // 0x21fa5c: 0x40f809  jalr        $v0
label_21fa60:
    if (ctx->pc == 0x21FA60u) {
        ctx->pc = 0x21FA64u;
        goto label_21fa64;
    }
    ctx->pc = 0x21FA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21FA64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FA5Cu, 0x21FA64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21FA64u;
label_21fa64:
    // 0x21fa64: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x21fa64u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21fa68:
    // 0x21fa68: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x21fa68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_21fa6c:
    // 0x21fa6c: 0x3e00008  jr          $ra
label_21fa70:
    if (ctx->pc == 0x21FA70u) {
        ctx->pc = 0x21FA74u;
        goto label_fallthrough_0x21fa6c;
    }
    ctx->pc = 0x21FA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21fa6c:
    ctx->pc = 0x21FA74u;
}
