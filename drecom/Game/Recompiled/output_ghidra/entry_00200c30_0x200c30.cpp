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

// Function: entry_00200c30
// Address: 0x200c30 - 0x200c54
void entry_00200c30_0x200c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200c30_0x200c30");
#endif

    switch (ctx->pc) {
        case 0x200c44u: goto label_200c44;
        default: break;
    }

    ctx->pc = 0x200c30u;

label_200c30:
    // 0x200c30: 0x24429f80  addiu       $v0, $v0, -0x6080
    ctx->pc = 0x200c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942592));
label_200c34:
    // 0x200c34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x200c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_200c38:
    // 0x200c38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x200c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_200c3c:
    // 0x200c3c: 0x40f809  jalr        $v0
label_200c40:
    if (ctx->pc == 0x200C40u) {
        ctx->pc = 0x200C44u;
        goto label_200c44;
    }
    ctx->pc = 0x200C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200C44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200C3Cu, 0x200C44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200C44u;
label_200c44:
    // 0x200c44: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x200c44u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_200c48:
    // 0x200c48: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x200c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_200c4c:
    // 0x200c4c: 0x3e00008  jr          $ra
label_200c50:
    if (ctx->pc == 0x200C50u) {
        ctx->pc = 0x200C54u;
        goto label_fallthrough_0x200c4c;
    }
    ctx->pc = 0x200C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x200c4c:
    ctx->pc = 0x200C54u;
}
