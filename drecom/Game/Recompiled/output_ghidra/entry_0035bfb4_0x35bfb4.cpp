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

// Function: entry_0035bfb4
// Address: 0x35bfb4 - 0x35bfd8
void entry_0035bfb4_0x35bfb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035bfb4_0x35bfb4");
#endif

    switch (ctx->pc) {
        case 0x35bfc8u: goto label_35bfc8;
        default: break;
    }

    ctx->pc = 0x35bfb4u;

label_35bfb4:
    // 0x35bfb4: 0x2442aa58  addiu       $v0, $v0, -0x55A8
    ctx->pc = 0x35bfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945368));
label_35bfb8:
    // 0x35bfb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35bfbc:
    // 0x35bfbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35bfc0:
    // 0x35bfc0: 0x40f809  jalr        $v0
label_35bfc4:
    if (ctx->pc == 0x35BFC4u) {
        ctx->pc = 0x35BFC8u;
        goto label_35bfc8;
    }
    ctx->pc = 0x35BFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35BFC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BFC0u, 0x35BFC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35BFC8u;
label_35bfc8:
    // 0x35bfc8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35bfc8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35bfcc:
    // 0x35bfcc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35bfccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35bfd0:
    // 0x35bfd0: 0x3e00008  jr          $ra
label_35bfd4:
    if (ctx->pc == 0x35BFD4u) {
        ctx->pc = 0x35BFD8u;
        goto label_fallthrough_0x35bfd0;
    }
    ctx->pc = 0x35BFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35bfd0:
    ctx->pc = 0x35BFD8u;
}
