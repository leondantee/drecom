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

// Function: entry_0036e030
// Address: 0x36e030 - 0x36e054
void entry_0036e030_0x36e030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036e030_0x36e030");
#endif

    switch (ctx->pc) {
        case 0x36e044u: goto label_36e044;
        default: break;
    }

    ctx->pc = 0x36e030u;

label_36e030:
    // 0x36e030: 0x2442b350  addiu       $v0, $v0, -0x4CB0
    ctx->pc = 0x36e030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947664));
label_36e034:
    // 0x36e034: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36e034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36e038:
    // 0x36e038: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36e038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36e03c:
    // 0x36e03c: 0x40f809  jalr        $v0
label_36e040:
    if (ctx->pc == 0x36E040u) {
        ctx->pc = 0x36E044u;
        goto label_36e044;
    }
    ctx->pc = 0x36E03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36E044u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E03Cu, 0x36E044u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36E044u;
label_36e044:
    // 0x36e044: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36e044u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36e048:
    // 0x36e048: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36e048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_36e04c:
    // 0x36e04c: 0x3e00008  jr          $ra
label_36e050:
    if (ctx->pc == 0x36E050u) {
        ctx->pc = 0x36E054u;
        goto label_fallthrough_0x36e04c;
    }
    ctx->pc = 0x36E04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36e04c:
    ctx->pc = 0x36E054u;
}
