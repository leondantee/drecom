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

// Function: entry_001aa870
// Address: 0x1aa870 - 0x1aa894
void entry_001aa870_0x1aa870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa870_0x1aa870");
#endif

    switch (ctx->pc) {
        case 0x1aa884u: goto label_1aa884;
        default: break;
    }

    ctx->pc = 0x1aa870u;

label_1aa870:
    // 0x1aa870: 0x24428180  addiu       $v0, $v0, -0x7E80
    ctx->pc = 0x1aa870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934912));
label_1aa874:
    // 0x1aa874: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aa874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aa878:
    // 0x1aa878: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1aa878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1aa87c:
    // 0x1aa87c: 0x40f809  jalr        $v0
label_1aa880:
    if (ctx->pc == 0x1AA880u) {
        ctx->pc = 0x1AA884u;
        goto label_1aa884;
    }
    ctx->pc = 0x1AA87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AA884u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA87Cu, 0x1AA884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA884u;
label_1aa884:
    // 0x1aa884: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1aa884u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1aa888:
    // 0x1aa888: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1aa888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1aa88c:
    // 0x1aa88c: 0x3e00008  jr          $ra
label_1aa890:
    if (ctx->pc == 0x1AA890u) {
        ctx->pc = 0x1AA894u;
        goto label_fallthrough_0x1aa88c;
    }
    ctx->pc = 0x1AA88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1aa88c:
    ctx->pc = 0x1AA894u;
}
