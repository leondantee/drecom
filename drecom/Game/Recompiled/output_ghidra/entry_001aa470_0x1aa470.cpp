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

// Function: entry_001aa470
// Address: 0x1aa470 - 0x1aa494
void entry_001aa470_0x1aa470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa470_0x1aa470");
#endif

    switch (ctx->pc) {
        case 0x1aa484u: goto label_1aa484;
        default: break;
    }

    ctx->pc = 0x1aa470u;

label_1aa470:
    // 0x1aa470: 0x24428178  addiu       $v0, $v0, -0x7E88
    ctx->pc = 0x1aa470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934904));
label_1aa474:
    // 0x1aa474: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aa474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aa478:
    // 0x1aa478: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1aa478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1aa47c:
    // 0x1aa47c: 0x40f809  jalr        $v0
label_1aa480:
    if (ctx->pc == 0x1AA480u) {
        ctx->pc = 0x1AA484u;
        goto label_1aa484;
    }
    ctx->pc = 0x1AA47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AA484u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA47Cu, 0x1AA484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA484u;
label_1aa484:
    // 0x1aa484: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1aa484u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1aa488:
    // 0x1aa488: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1aa488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1aa48c:
    // 0x1aa48c: 0x3e00008  jr          $ra
label_1aa490:
    if (ctx->pc == 0x1AA490u) {
        ctx->pc = 0x1AA494u;
        goto label_fallthrough_0x1aa48c;
    }
    ctx->pc = 0x1AA48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA48Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1aa48c:
    ctx->pc = 0x1AA494u;
}
