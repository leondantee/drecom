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

// Function: entry_0019cc98
// Address: 0x19cc98 - 0x19ccb8
void entry_0019cc98_0x19cc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cc98_0x19cc98");
#endif

    switch (ctx->pc) {
        case 0x19cca0u: goto label_19cca0;
        default: break;
    }

    ctx->pc = 0x19cc98u;

    // 0x19cc98: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x19CC98u;
    SET_GPR_U32(ctx, 31, 0x19CCA0u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x19CC98u, 0x19CCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CCA0u;
label_19cca0:
    // 0x19cca0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19cca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cca4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x19cca4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cca8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19cca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ccac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19ccacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19ccb0: 0x3e00008  jr          $ra
    ctx->pc = 0x19CCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CCB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CCB8u;
}
