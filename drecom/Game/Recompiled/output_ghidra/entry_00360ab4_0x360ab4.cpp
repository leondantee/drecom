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

// Function: entry_00360ab4
// Address: 0x360ab4 - 0x360ad8
void entry_00360ab4_0x360ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00360ab4_0x360ab4");
#endif

    switch (ctx->pc) {
        case 0x360ac8u: goto label_360ac8;
        default: break;
    }

    ctx->pc = 0x360ab4u;

label_360ab4:
    // 0x360ab4: 0x2442ac38  addiu       $v0, $v0, -0x53C8
    ctx->pc = 0x360ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945848));
label_360ab8:
    // 0x360ab8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x360ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_360abc:
    // 0x360abc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x360abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_360ac0:
    // 0x360ac0: 0x40f809  jalr        $v0
label_360ac4:
    if (ctx->pc == 0x360AC4u) {
        ctx->pc = 0x360AC8u;
        goto label_360ac8;
    }
    ctx->pc = 0x360AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x360AC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360AC0u, 0x360AC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x360AC8u;
label_360ac8:
    // 0x360ac8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x360ac8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_360acc:
    // 0x360acc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x360accu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_360ad0:
    // 0x360ad0: 0x3e00008  jr          $ra
label_360ad4:
    if (ctx->pc == 0x360AD4u) {
        ctx->pc = 0x360AD8u;
        goto label_fallthrough_0x360ad0;
    }
    ctx->pc = 0x360AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x360ad0:
    ctx->pc = 0x360AD8u;
}
