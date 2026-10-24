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

// Function: entry_003797c4
// Address: 0x3797c4 - 0x3797e8
void entry_003797c4_0x3797c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003797c4_0x3797c4");
#endif

    switch (ctx->pc) {
        case 0x3797d8u: goto label_3797d8;
        default: break;
    }

    ctx->pc = 0x3797c4u;

label_3797c4:
    // 0x3797c4: 0x2442b7b0  addiu       $v0, $v0, -0x4850
    ctx->pc = 0x3797c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948784));
label_3797c8:
    // 0x3797c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3797c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3797cc:
    // 0x3797cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3797ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3797d0:
    // 0x3797d0: 0x40f809  jalr        $v0
label_3797d4:
    if (ctx->pc == 0x3797D4u) {
        ctx->pc = 0x3797D8u;
        goto label_3797d8;
    }
    ctx->pc = 0x3797D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3797D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3797D0u, 0x3797D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3797D8u;
label_3797d8:
    // 0x3797d8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3797d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3797dc:
    // 0x3797dc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3797dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3797e0:
    // 0x3797e0: 0x3e00008  jr          $ra
label_3797e4:
    if (ctx->pc == 0x3797E4u) {
        ctx->pc = 0x3797E8u;
        goto label_fallthrough_0x3797e0;
    }
    ctx->pc = 0x3797E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3797E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3797e0:
    ctx->pc = 0x3797E8u;
}
