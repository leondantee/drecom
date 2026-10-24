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

// Function: entry_00282e40
// Address: 0x282e40 - 0x282e60
void entry_00282e40_0x282e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00282e40_0x282e40");
#endif

    switch (ctx->pc) {
        case 0x282e48u: goto label_282e48;
        default: break;
    }

    ctx->pc = 0x282e40u;

    // 0x282e40: 0xc084934  jal         func_2124D0
    ctx->pc = 0x282E40u;
    SET_GPR_U32(ctx, 31, 0x282E48u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x282E40u, 0x282E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282E48u;
label_282e48:
    // 0x282e48: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x282e48u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282e4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x282e4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282e50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x282e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282e54: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x282e54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x282e58: 0x3e00008  jr          $ra
    ctx->pc = 0x282E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282E60u;
}
