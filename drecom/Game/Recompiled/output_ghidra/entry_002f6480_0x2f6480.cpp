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

// Function: entry_002f6480
// Address: 0x2f6480 - 0x2f64a4
void entry_002f6480_0x2f6480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f6480_0x2f6480");
#endif

    switch (ctx->pc) {
        case 0x2f6494u: goto label_2f6494;
        default: break;
    }

    ctx->pc = 0x2f6480u;

label_2f6480:
    // 0x2f6480: 0x24428f90  addiu       $v0, $v0, -0x7070
    ctx->pc = 0x2f6480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938512));
label_2f6484:
    // 0x2f6484: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f6484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f6488:
    // 0x2f6488: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f6488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f648c:
    // 0x2f648c: 0x40f809  jalr        $v0
label_2f6490:
    if (ctx->pc == 0x2F6490u) {
        ctx->pc = 0x2F6494u;
        goto label_2f6494;
    }
    ctx->pc = 0x2F648Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F6494u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F648Cu, 0x2F6494u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F6494u;
label_2f6494:
    // 0x2f6494: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2f6494u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f6498:
    // 0x2f6498: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2f6498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2f649c:
    // 0x2f649c: 0x3e00008  jr          $ra
label_2f64a0:
    if (ctx->pc == 0x2F64A0u) {
        ctx->pc = 0x2F64A4u;
        goto label_fallthrough_0x2f649c;
    }
    ctx->pc = 0x2F649Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F649Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f649c:
    ctx->pc = 0x2F64A4u;
}
