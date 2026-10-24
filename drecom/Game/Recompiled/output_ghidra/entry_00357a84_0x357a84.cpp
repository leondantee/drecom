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

// Function: entry_00357a84
// Address: 0x357a84 - 0x357aa8
void entry_00357a84_0x357a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00357a84_0x357a84");
#endif

    switch (ctx->pc) {
        case 0x357a98u: goto label_357a98;
        default: break;
    }

    ctx->pc = 0x357a84u;

label_357a84:
    // 0x357a84: 0x2442a6e0  addiu       $v0, $v0, -0x5920
    ctx->pc = 0x357a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944480));
label_357a88:
    // 0x357a88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x357a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_357a8c:
    // 0x357a8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x357a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_357a90:
    // 0x357a90: 0x40f809  jalr        $v0
label_357a94:
    if (ctx->pc == 0x357A94u) {
        ctx->pc = 0x357A98u;
        goto label_357a98;
    }
    ctx->pc = 0x357A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x357A98u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357A90u, 0x357A98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x357A98u;
label_357a98:
    // 0x357a98: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x357a98u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_357a9c:
    // 0x357a9c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x357a9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_357aa0:
    // 0x357aa0: 0x3e00008  jr          $ra
label_357aa4:
    if (ctx->pc == 0x357AA4u) {
        ctx->pc = 0x357AA8u;
        goto label_fallthrough_0x357aa0;
    }
    ctx->pc = 0x357AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x357aa0:
    ctx->pc = 0x357AA8u;
}
