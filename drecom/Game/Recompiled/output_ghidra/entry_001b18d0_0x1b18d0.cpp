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

// Function: entry_001b18d0
// Address: 0x1b18d0 - 0x1b18ec
void entry_001b18d0_0x1b18d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b18d0_0x1b18d0");
#endif

    switch (ctx->pc) {
        case 0x1b18d8u: goto label_1b18d8;
        default: break;
    }

    ctx->pc = 0x1b18d0u;

    // 0x1b18d0: 0xc0c9c7c  jal         func_3271F0
    ctx->pc = 0x1B18D0u;
    SET_GPR_U32(ctx, 31, 0x1B18D8u);
    ctx->pc = 0x3271F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3271F0u, 0x1B18D0u, 0x1B18D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B18D8u;
label_1b18d8:
    // 0x1b18d8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1b18d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b18dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b18dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b18e0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b18e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b18e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B18E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B18E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B18ECu;
}
