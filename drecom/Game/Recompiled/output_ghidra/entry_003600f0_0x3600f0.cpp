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

// Function: entry_003600f0
// Address: 0x3600f0 - 0x360114
void entry_003600f0_0x3600f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003600f0_0x3600f0");
#endif

    switch (ctx->pc) {
        case 0x360104u: goto label_360104;
        default: break;
    }

    ctx->pc = 0x3600f0u;

label_3600f0:
    // 0x3600f0: 0x2442aba0  addiu       $v0, $v0, -0x5460
    ctx->pc = 0x3600f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945696));
label_3600f4:
    // 0x3600f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3600f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3600f8:
    // 0x3600f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3600f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3600fc:
    // 0x3600fc: 0x40f809  jalr        $v0
label_360100:
    if (ctx->pc == 0x360100u) {
        ctx->pc = 0x360104u;
        goto label_360104;
    }
    ctx->pc = 0x3600FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x360104u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3600FCu, 0x360104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x360104u;
label_360104:
    // 0x360104: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x360104u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_360108:
    // 0x360108: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x360108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_36010c:
    // 0x36010c: 0x3e00008  jr          $ra
label_360110:
    if (ctx->pc == 0x360110u) {
        ctx->pc = 0x360114u;
        goto label_fallthrough_0x36010c;
    }
    ctx->pc = 0x36010Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36010Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36010c:
    ctx->pc = 0x360114u;
}
