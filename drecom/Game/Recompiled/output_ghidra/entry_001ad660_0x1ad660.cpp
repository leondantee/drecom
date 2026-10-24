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

// Function: entry_001ad660
// Address: 0x1ad660 - 0x1ad680
void entry_001ad660_0x1ad660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad660_0x1ad660");
#endif

    switch (ctx->pc) {
        case 0x1ad668u: goto label_1ad668;
        default: break;
    }

    ctx->pc = 0x1ad660u;

    // 0x1ad660: 0xc06b5b8  jal         func_1AD6E0
    ctx->pc = 0x1AD660u;
    SET_GPR_U32(ctx, 31, 0x1AD668u);
    ctx->pc = 0x1AD6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD6E0u, 0x1AD660u, 0x1AD668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD668u;
label_1ad668:
    // 0x1ad668: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1ad668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1ad66c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ad66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ad670: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1ad670u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad674: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ad674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ad678: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD680u;
}
