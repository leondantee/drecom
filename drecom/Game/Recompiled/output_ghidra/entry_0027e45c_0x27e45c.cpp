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

// Function: entry_0027e45c
// Address: 0x27e45c - 0x27e478
void entry_0027e45c_0x27e45c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027e45c_0x27e45c");
#endif

    switch (ctx->pc) {
        case 0x27e464u: goto label_27e464;
        default: break;
    }

    ctx->pc = 0x27e45cu;

    // 0x27e45c: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27E45Cu;
    SET_GPR_U32(ctx, 31, 0x27E464u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27E45Cu, 0x27E464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E464u;
label_27e464:
    // 0x27e464: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27e464u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e468: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27e468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e46c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27e46cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27e470: 0x3e00008  jr          $ra
    ctx->pc = 0x27E470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E478u;
}
