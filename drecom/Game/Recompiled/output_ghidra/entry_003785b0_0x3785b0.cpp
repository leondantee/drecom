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

// Function: entry_003785b0
// Address: 0x3785b0 - 0x3785cc
void entry_003785b0_0x3785b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003785b0_0x3785b0");
#endif

    switch (ctx->pc) {
        case 0x3785b8u: goto label_3785b8;
        default: break;
    }

    ctx->pc = 0x3785b0u;

    // 0x3785b0: 0xc067f00  jal         func_19FC00
    ctx->pc = 0x3785B0u;
    SET_GPR_U32(ctx, 31, 0x3785B8u);
    ctx->pc = 0x19FC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC00u, 0x3785B0u, 0x3785B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3785B8u;
label_3785b8:
    // 0x3785b8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3785b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3785bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3785bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3785c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3785c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3785c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3785C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3785C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3785CCu;
}
