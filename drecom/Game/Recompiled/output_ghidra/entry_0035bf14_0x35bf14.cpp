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

// Function: entry_0035bf14
// Address: 0x35bf14 - 0x35bf38
void entry_0035bf14_0x35bf14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035bf14_0x35bf14");
#endif

    switch (ctx->pc) {
        case 0x35bf28u: goto label_35bf28;
        default: break;
    }

    ctx->pc = 0x35bf14u;

label_35bf14:
    // 0x35bf14: 0x2442aa50  addiu       $v0, $v0, -0x55B0
    ctx->pc = 0x35bf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945360));
label_35bf18:
    // 0x35bf18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35bf1c:
    // 0x35bf1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35bf20:
    // 0x35bf20: 0x40f809  jalr        $v0
label_35bf24:
    if (ctx->pc == 0x35BF24u) {
        ctx->pc = 0x35BF28u;
        goto label_35bf28;
    }
    ctx->pc = 0x35BF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35BF28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BF20u, 0x35BF28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35BF28u;
label_35bf28:
    // 0x35bf28: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35bf28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35bf2c:
    // 0x35bf2c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35bf2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35bf30:
    // 0x35bf30: 0x3e00008  jr          $ra
label_35bf34:
    if (ctx->pc == 0x35BF34u) {
        ctx->pc = 0x35BF38u;
        goto label_fallthrough_0x35bf30;
    }
    ctx->pc = 0x35BF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35bf30:
    ctx->pc = 0x35BF38u;
}
