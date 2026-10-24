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

// Function: entry_00254210
// Address: 0x254210 - 0x254234
void entry_00254210_0x254210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00254210_0x254210");
#endif

    switch (ctx->pc) {
        case 0x254224u: goto label_254224;
        default: break;
    }

    ctx->pc = 0x254210u;

label_254210:
    // 0x254210: 0x2442b770  addiu       $v0, $v0, -0x4890
    ctx->pc = 0x254210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948720));
label_254214:
    // 0x254214: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x254214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_254218:
    // 0x254218: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x254218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25421c:
    // 0x25421c: 0x40f809  jalr        $v0
label_254220:
    if (ctx->pc == 0x254220u) {
        ctx->pc = 0x254224u;
        goto label_254224;
    }
    ctx->pc = 0x25421Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x254224u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25421Cu, 0x254224u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x254224u;
label_254224:
    // 0x254224: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x254224u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_254228:
    // 0x254228: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x254228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_25422c:
    // 0x25422c: 0x3e00008  jr          $ra
label_254230:
    if (ctx->pc == 0x254230u) {
        ctx->pc = 0x254234u;
        goto label_fallthrough_0x25422c;
    }
    ctx->pc = 0x25422Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25422Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25422c:
    ctx->pc = 0x254234u;
}
