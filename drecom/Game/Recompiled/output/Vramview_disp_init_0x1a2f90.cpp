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

// Function: Vramview_disp_init
// Address: 0x1a2f90 - 0x1a2fc4
void Vramview_disp_init_0x1a2f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Vramview_disp_init_0x1a2f90");
#endif

    switch (ctx->pc) {
        case 0x1a2fa8u: goto label_1a2fa8;
        case 0x1a2fb4u: goto label_1a2fb4;
        default: break;
    }

    ctx->pc = 0x1a2f90u;

    // 0x1a2f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a2f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a2f94: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1a2f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a2f98: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1a2f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1a2f9c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1a2f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2fa0: 0xc068bf4  jal         func_1A2FD0
    ctx->pc = 0x1A2FA0u;
    SET_GPR_U32(ctx, 31, 0x1A2FA8u);
    ctx->pc = 0x1A2FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2FD0u, 0x1A2FA0u, 0x1A2FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2FA8u;
label_1a2fa8:
    // 0x1a2fa8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1a2fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2fac: 0xc068fe4  jal         func_1A3F90
    ctx->pc = 0x1A2FACu;
    SET_GPR_U32(ctx, 31, 0x1A2FB4u);
    ctx->pc = 0x1A3F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3F90u, 0x1A2FACu, 0x1A2FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2FB4u;
label_1a2fb4:
    // 0x1a2fb4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1a2fb4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2fb8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a2fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a2fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2FC4u;
}
