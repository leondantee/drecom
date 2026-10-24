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

// Function: entry_0019f3d8
// Address: 0x19f3d8 - 0x19f3f0
void entry_0019f3d8_0x19f3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f3d8_0x19f3d8");
#endif

    switch (ctx->pc) {
        case 0x19f3e0u: goto label_19f3e0;
        default: break;
    }

    ctx->pc = 0x19f3d8u;

    // 0x19f3d8: 0xc0ce554  jal         func_339550
    ctx->pc = 0x19F3D8u;
    SET_GPR_U32(ctx, 31, 0x19F3E0u);
    ctx->pc = 0x339550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339550u, 0x19F3D8u, 0x19F3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F3E0u;
label_19f3e0:
    // 0x19f3e0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x19f3e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f3e4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19f3e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19f3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x19F3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F3F0u;
}
