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

// Function: Camera_devil_sky
// Address: 0x183a60 - 0x183a80
void Camera_devil_sky_0x183a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Camera_devil_sky_0x183a60");
#endif

    switch (ctx->pc) {
        case 0x183a70u: goto label_183a70;
        default: break;
    }

    ctx->pc = 0x183a60u;

    // 0x183a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x183a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x183a64: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x183a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x183a68: 0xc058ca4  jal         func_163290
    ctx->pc = 0x183A68u;
    SET_GPR_U32(ctx, 31, 0x183A70u);
    ctx->pc = 0x163290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163290u, 0x183A68u, 0x183A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183A70u;
label_183a70:
    // 0x183a70: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x183a70u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183a74: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x183a74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183a78: 0x3e00008  jr          $ra
    ctx->pc = 0x183A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183A80u;
}
