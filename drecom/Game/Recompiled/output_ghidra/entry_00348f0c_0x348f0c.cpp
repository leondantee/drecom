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

// Function: entry_00348f0c
// Address: 0x348f0c - 0x348f28
void entry_00348f0c_0x348f0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00348f0c_0x348f0c");
#endif

    switch (ctx->pc) {
        case 0x348f14u: goto label_348f14;
        default: break;
    }

    ctx->pc = 0x348f0cu;

    // 0x348f0c: 0xc0d4ed0  jal         func_353B40
    ctx->pc = 0x348F0Cu;
    SET_GPR_U32(ctx, 31, 0x348F14u);
    ctx->pc = 0x353B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353B40u, 0x348F0Cu, 0x348F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348F14u;
label_348f14:
    // 0x348f14: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x348f14u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x348f18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x348f18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348f1c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x348f1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x348f20: 0x3e00008  jr          $ra
    ctx->pc = 0x348F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348F28u;
}
