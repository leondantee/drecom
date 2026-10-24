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

// Function: Camera_zelda
// Address: 0x183a20 - 0x183a40
void Camera_zelda_0x183a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Camera_zelda_0x183a20");
#endif

    switch (ctx->pc) {
        case 0x183a30u: goto label_183a30;
        default: break;
    }

    ctx->pc = 0x183a20u;

    // 0x183a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x183a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x183a24: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x183a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x183a28: 0xc058c9c  jal         func_163270
    ctx->pc = 0x183A28u;
    SET_GPR_U32(ctx, 31, 0x183A30u);
    ctx->pc = 0x163270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163270u, 0x183A28u, 0x183A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183A30u;
label_183a30:
    // 0x183a30: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x183a30u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183a34: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x183a34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183a38: 0x3e00008  jr          $ra
    ctx->pc = 0x183A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183A40u;
}
