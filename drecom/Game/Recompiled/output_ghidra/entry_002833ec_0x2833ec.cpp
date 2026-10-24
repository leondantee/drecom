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

// Function: entry_002833ec
// Address: 0x2833ec - 0x283408
void entry_002833ec_0x2833ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002833ec_0x2833ec");
#endif

    switch (ctx->pc) {
        case 0x2833f4u: goto label_2833f4;
        default: break;
    }

    ctx->pc = 0x2833ecu;

    // 0x2833ec: 0xc084934  jal         func_2124D0
    ctx->pc = 0x2833ECu;
    SET_GPR_U32(ctx, 31, 0x2833F4u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x2833ECu, 0x2833F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2833F4u;
label_2833f4:
    // 0x2833f4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2833f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2833f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2833f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2833fc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2833fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x283400: 0x3e00008  jr          $ra
    ctx->pc = 0x283400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283408u;
}
