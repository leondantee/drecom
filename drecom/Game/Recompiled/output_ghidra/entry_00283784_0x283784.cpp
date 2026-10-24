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

// Function: entry_00283784
// Address: 0x283784 - 0x2837a0
void entry_00283784_0x283784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00283784_0x283784");
#endif

    switch (ctx->pc) {
        case 0x28378cu: goto label_28378c;
        default: break;
    }

    ctx->pc = 0x283784u;

    // 0x283784: 0xc084934  jal         func_2124D0
    ctx->pc = 0x283784u;
    SET_GPR_U32(ctx, 31, 0x28378Cu);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x283784u, 0x28378Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28378Cu;
label_28378c:
    // 0x28378c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x28378cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283790: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x283790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283794: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x283794u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x283798: 0x3e00008  jr          $ra
    ctx->pc = 0x283798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2837A0u;
}
