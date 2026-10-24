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

// Function: caseD_5
// Address: 0x27c10c - 0x27c12c
void caseD_5_0x27c10c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x27c10c");
#endif

    switch (ctx->pc) {
        case 0x27c114u: goto label_27c114;
        default: break;
    }

    ctx->pc = 0x27c10cu;

    // 0x27c10c: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27C10Cu;
    SET_GPR_U32(ctx, 31, 0x27C114u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27C10Cu, 0x27C114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C114u;
label_27c114:
    // 0x27c114: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x27c114u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27c118: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27c118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27c11c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27c11cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27c120: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x27c120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x27c124: 0x3e00008  jr          $ra
    ctx->pc = 0x27C124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C12Cu;
}
