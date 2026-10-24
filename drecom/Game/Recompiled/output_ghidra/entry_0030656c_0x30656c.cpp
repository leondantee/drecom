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

// Function: entry_0030656c
// Address: 0x30656c - 0x306588
void entry_0030656c_0x30656c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030656c_0x30656c");
#endif

    switch (ctx->pc) {
        case 0x306578u: goto label_306578;
        default: break;
    }

    ctx->pc = 0x30656cu;

label_30656c:
    // 0x30656c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30656cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_306570:
    // 0x306570: 0x40f809  jalr        $v0
label_306574:
    if (ctx->pc == 0x306574u) {
        ctx->pc = 0x306578u;
        goto label_306578;
    }
    ctx->pc = 0x306570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x306578u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306570u, 0x306578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x306578u;
label_306578:
    // 0x306578: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x306578u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30657c:
    // 0x30657c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x30657cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_306580:
    // 0x306580: 0x3e00008  jr          $ra
label_306584:
    if (ctx->pc == 0x306584u) {
        ctx->pc = 0x306588u;
        goto label_fallthrough_0x306580;
    }
    ctx->pc = 0x306580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x306580:
    ctx->pc = 0x306588u;
}
