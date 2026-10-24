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

// Function: entry_00362634
// Address: 0x362634 - 0x362658
void entry_00362634_0x362634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00362634_0x362634");
#endif

    switch (ctx->pc) {
        case 0x362648u: goto label_362648;
        default: break;
    }

    ctx->pc = 0x362634u;

label_362634:
    // 0x362634: 0x2442acd8  addiu       $v0, $v0, -0x5328
    ctx->pc = 0x362634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946008));
label_362638:
    // 0x362638: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x362638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36263c:
    // 0x36263c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36263cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_362640:
    // 0x362640: 0x40f809  jalr        $v0
label_362644:
    if (ctx->pc == 0x362644u) {
        ctx->pc = 0x362648u;
        goto label_362648;
    }
    ctx->pc = 0x362640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x362648u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362640u, 0x362648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x362648u;
label_362648:
    // 0x362648: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x362648u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36264c:
    // 0x36264c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36264cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_362650:
    // 0x362650: 0x3e00008  jr          $ra
label_362654:
    if (ctx->pc == 0x362654u) {
        ctx->pc = 0x362658u;
        goto label_fallthrough_0x362650;
    }
    ctx->pc = 0x362650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x362650:
    ctx->pc = 0x362658u;
}
