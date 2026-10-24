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

// Function: entry_00360240
// Address: 0x360240 - 0x360264
void entry_00360240_0x360240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00360240_0x360240");
#endif

    switch (ctx->pc) {
        case 0x360254u: goto label_360254;
        default: break;
    }

    ctx->pc = 0x360240u;

label_360240:
    // 0x360240: 0x2442abc0  addiu       $v0, $v0, -0x5440
    ctx->pc = 0x360240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945728));
label_360244:
    // 0x360244: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x360244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_360248:
    // 0x360248: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x360248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36024c:
    // 0x36024c: 0x40f809  jalr        $v0
label_360250:
    if (ctx->pc == 0x360250u) {
        ctx->pc = 0x360254u;
        goto label_360254;
    }
    ctx->pc = 0x36024Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x360254u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36024Cu, 0x360254u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x360254u;
label_360254:
    // 0x360254: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x360254u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_360258:
    // 0x360258: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x360258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_36025c:
    // 0x36025c: 0x3e00008  jr          $ra
label_360260:
    if (ctx->pc == 0x360260u) {
        ctx->pc = 0x360264u;
        goto label_fallthrough_0x36025c;
    }
    ctx->pc = 0x36025Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36025Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36025c:
    ctx->pc = 0x360264u;
}
