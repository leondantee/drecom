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

// Function: R10a_evt_scene4
// Address: 0x272ab0 - 0x272ad0
void R10a_evt_scene4_0x272ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10a_evt_scene4_0x272ab0");
#endif

    switch (ctx->pc) {
        case 0x272ac0u: goto label_272ac0;
        default: break;
    }

    ctx->pc = 0x272ab0u;

    // 0x272ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x272ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x272ab4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x272ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x272ab8: 0xc084934  jal         func_2124D0
    ctx->pc = 0x272AB8u;
    SET_GPR_U32(ctx, 31, 0x272AC0u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x272AB8u, 0x272AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272AC0u;
label_272ac0:
    // 0x272ac0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x272ac0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272ac4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x272ac4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x272ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x272AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272AD0u;
}
