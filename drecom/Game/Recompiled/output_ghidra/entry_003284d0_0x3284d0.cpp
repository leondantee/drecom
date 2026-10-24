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

// Function: entry_003284d0
// Address: 0x3284d0 - 0x3284f4
void entry_003284d0_0x3284d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003284d0_0x3284d0");
#endif

    switch (ctx->pc) {
        case 0x3284e4u: goto label_3284e4;
        default: break;
    }

    ctx->pc = 0x3284d0u;

label_3284d0:
    // 0x3284d0: 0x2442a200  addiu       $v0, $v0, -0x5E00
    ctx->pc = 0x3284d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943232));
label_3284d4:
    // 0x3284d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3284d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3284d8:
    // 0x3284d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3284d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3284dc:
    // 0x3284dc: 0x40f809  jalr        $v0
label_3284e0:
    if (ctx->pc == 0x3284E0u) {
        ctx->pc = 0x3284E4u;
        goto label_3284e4;
    }
    ctx->pc = 0x3284DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3284E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3284DCu, 0x3284E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3284E4u;
label_3284e4:
    // 0x3284e4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3284e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3284e8:
    // 0x3284e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3284e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3284ec:
    // 0x3284ec: 0x3e00008  jr          $ra
label_3284f0:
    if (ctx->pc == 0x3284F0u) {
        ctx->pc = 0x3284F4u;
        goto label_fallthrough_0x3284ec;
    }
    ctx->pc = 0x3284ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3284ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3284ec:
    ctx->pc = 0x3284F4u;
}
