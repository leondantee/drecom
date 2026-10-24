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

// Function: entry_002f52e0
// Address: 0x2f52e0 - 0x2f52f8
void entry_002f52e0_0x2f52e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f52e0_0x2f52e0");
#endif

    switch (ctx->pc) {
        case 0x2f52e8u: goto label_2f52e8;
        default: break;
    }

    ctx->pc = 0x2f52e0u;

    // 0x2f52e0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F52E0u;
    SET_GPR_U32(ctx, 31, 0x2F52E8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F52E0u, 0x2F52E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F52E8u;
label_2f52e8:
    // 0x2f52e8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2f52e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f52ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2f52ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f52f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F52F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F52F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F52F8u;
}
