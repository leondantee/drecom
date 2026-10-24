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

// Function: entry_002785a8
// Address: 0x2785a8 - 0x2785c8
void entry_002785a8_0x2785a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002785a8_0x2785a8");
#endif

    switch (ctx->pc) {
        case 0x2785b0u: goto label_2785b0;
        default: break;
    }

    ctx->pc = 0x2785a8u;

    // 0x2785a8: 0xc084934  jal         func_2124D0
    ctx->pc = 0x2785A8u;
    SET_GPR_U32(ctx, 31, 0x2785B0u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x2785A8u, 0x2785B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2785B0u;
label_2785b0:
    // 0x2785b0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2785b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2785b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2785b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2785b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2785b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2785bc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2785bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2785c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2785C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2785C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2785C8u;
}
