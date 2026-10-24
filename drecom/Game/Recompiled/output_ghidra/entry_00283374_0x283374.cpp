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

// Function: entry_00283374
// Address: 0x283374 - 0x283390
void entry_00283374_0x283374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00283374_0x283374");
#endif

    switch (ctx->pc) {
        case 0x28337cu: goto label_28337c;
        default: break;
    }

    ctx->pc = 0x283374u;

    // 0x283374: 0xc084934  jal         func_2124D0
    ctx->pc = 0x283374u;
    SET_GPR_U32(ctx, 31, 0x28337Cu);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x283374u, 0x28337Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28337Cu;
label_28337c:
    // 0x28337c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x28337cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283380: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x283380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283384: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x283384u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x283388: 0x3e00008  jr          $ra
    ctx->pc = 0x283388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283390u;
}
