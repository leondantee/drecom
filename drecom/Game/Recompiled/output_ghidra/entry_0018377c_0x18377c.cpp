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

// Function: entry_0018377c
// Address: 0x18377c - 0x183794
void entry_0018377c_0x18377c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018377c_0x18377c");
#endif

    switch (ctx->pc) {
        case 0x183784u: goto label_183784;
        default: break;
    }

    ctx->pc = 0x18377cu;

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
