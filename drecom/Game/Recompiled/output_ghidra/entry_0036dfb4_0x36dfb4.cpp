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

// Function: entry_0036dfb4
// Address: 0x36dfb4 - 0x36dfd8
void entry_0036dfb4_0x36dfb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036dfb4_0x36dfb4");
#endif

    switch (ctx->pc) {
        case 0x36dfc8u: goto label_36dfc8;
        default: break;
    }

    ctx->pc = 0x36dfb4u;

label_36dfb4:
    // 0x36dfb4: 0x2442b320  addiu       $v0, $v0, -0x4CE0
    ctx->pc = 0x36dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947616));
label_36dfb8:
    // 0x36dfb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36dfbc:
    // 0x36dfbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36dfc0:
    // 0x36dfc0: 0x40f809  jalr        $v0
label_36dfc4:
    if (ctx->pc == 0x36DFC4u) {
        ctx->pc = 0x36DFC8u;
        goto label_36dfc8;
    }
    ctx->pc = 0x36DFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36DFC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DFC0u, 0x36DFC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36DFC8u;
label_36dfc8:
    // 0x36dfc8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36dfc8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36dfcc:
    // 0x36dfcc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36dfccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_36dfd0:
    // 0x36dfd0: 0x3e00008  jr          $ra
label_36dfd4:
    if (ctx->pc == 0x36DFD4u) {
        ctx->pc = 0x36DFD8u;
        goto label_fallthrough_0x36dfd0;
    }
    ctx->pc = 0x36DFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36dfd0:
    ctx->pc = 0x36DFD8u;
}
