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

// Function: entry_00220820
// Address: 0x220820 - 0x220844
void entry_00220820_0x220820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220820_0x220820");
#endif

    switch (ctx->pc) {
        case 0x220834u: goto label_220834;
        default: break;
    }

    ctx->pc = 0x220820u;

label_220820:
    // 0x220820: 0x2442ac48  addiu       $v0, $v0, -0x53B8
    ctx->pc = 0x220820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945864));
label_220824:
    // 0x220824: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x220824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_220828:
    // 0x220828: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x220828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22082c:
    // 0x22082c: 0x40f809  jalr        $v0
label_220830:
    if (ctx->pc == 0x220830u) {
        ctx->pc = 0x220834u;
        goto label_220834;
    }
    ctx->pc = 0x22082Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x220834u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22082Cu, 0x220834u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x220834u;
label_220834:
    // 0x220834: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x220834u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_220838:
    // 0x220838: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x220838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_22083c:
    // 0x22083c: 0x3e00008  jr          $ra
label_220840:
    if (ctx->pc == 0x220840u) {
        ctx->pc = 0x220844u;
        goto label_fallthrough_0x22083c;
    }
    ctx->pc = 0x22083Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22083Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22083c:
    ctx->pc = 0x220844u;
}
