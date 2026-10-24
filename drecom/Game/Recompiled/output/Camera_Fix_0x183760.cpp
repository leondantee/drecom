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

// Function: Camera_Fix
// Address: 0x183760 - 0x183794
void Camera_Fix_0x183760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Camera_Fix_0x183760");
#endif

    switch (ctx->pc) {
        case 0x183778u: goto label_183778;
        case 0x183784u: goto label_183784;
        default: break;
    }

    ctx->pc = 0x183760u;

    // 0x183760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x183760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x183764: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x183764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x183768: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x183768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x18376c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x18376cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x183770: 0xc05f8f8  jal         func_17E3E0
    ctx->pc = 0x183770u;
    SET_GPR_U32(ctx, 31, 0x183778u);
    ctx->pc = 0x17E3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3E0u, 0x183770u, 0x183778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183778u;
label_183778:
    // 0x183778: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x183778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18377c: 0xc05f910  jal         func_17E440
    ctx->pc = 0x18377Cu;
    SET_GPR_U32(ctx, 31, 0x183784u);
    ctx->pc = 0x17E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E440u, 0x18377Cu, 0x183784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183784u;
label_183784:
    // 0x183784: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x183784u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183788: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x183788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18378c: 0x3e00008  jr          $ra
    ctx->pc = 0x18378Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18378Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183794u;
}
