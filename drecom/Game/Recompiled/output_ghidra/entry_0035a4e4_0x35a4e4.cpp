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

// Function: entry_0035a4e4
// Address: 0x35a4e4 - 0x35a508
void entry_0035a4e4_0x35a4e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035a4e4_0x35a4e4");
#endif

    switch (ctx->pc) {
        case 0x35a4f8u: goto label_35a4f8;
        default: break;
    }

    ctx->pc = 0x35a4e4u;

label_35a4e4:
    // 0x35a4e4: 0x2442a8e8  addiu       $v0, $v0, -0x5718
    ctx->pc = 0x35a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945000));
label_35a4e8:
    // 0x35a4e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35a4ec:
    // 0x35a4ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35a4f0:
    // 0x35a4f0: 0x40f809  jalr        $v0
label_35a4f4:
    if (ctx->pc == 0x35A4F4u) {
        ctx->pc = 0x35A4F8u;
        goto label_35a4f8;
    }
    ctx->pc = 0x35A4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35A4F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A4F0u, 0x35A4F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35A4F8u;
label_35a4f8:
    // 0x35a4f8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35a4f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35a4fc:
    // 0x35a4fc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35a4fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35a500:
    // 0x35a500: 0x3e00008  jr          $ra
label_35a504:
    if (ctx->pc == 0x35A504u) {
        ctx->pc = 0x35A508u;
        goto label_fallthrough_0x35a500;
    }
    ctx->pc = 0x35A500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35a500:
    ctx->pc = 0x35A508u;
}
