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

// Function: entry_0021dd60
// Address: 0x21dd60 - 0x21dd84
void entry_0021dd60_0x21dd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021dd60_0x21dd60");
#endif

    switch (ctx->pc) {
        case 0x21dd74u: goto label_21dd74;
        default: break;
    }

    ctx->pc = 0x21dd60u;

label_21dd60:
    // 0x21dd60: 0x2442ab30  addiu       $v0, $v0, -0x54D0
    ctx->pc = 0x21dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945584));
label_21dd64:
    // 0x21dd64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21dd68:
    // 0x21dd68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21dd6c:
    // 0x21dd6c: 0x40f809  jalr        $v0
label_21dd70:
    if (ctx->pc == 0x21DD70u) {
        ctx->pc = 0x21DD74u;
        goto label_21dd74;
    }
    ctx->pc = 0x21DD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21DD74u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DD6Cu, 0x21DD74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21DD74u;
label_21dd74:
    // 0x21dd74: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x21dd74u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21dd78:
    // 0x21dd78: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x21dd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_21dd7c:
    // 0x21dd7c: 0x3e00008  jr          $ra
label_21dd80:
    if (ctx->pc == 0x21DD80u) {
        ctx->pc = 0x21DD84u;
        goto label_fallthrough_0x21dd7c;
    }
    ctx->pc = 0x21DD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DD7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21dd7c:
    ctx->pc = 0x21DD84u;
}
