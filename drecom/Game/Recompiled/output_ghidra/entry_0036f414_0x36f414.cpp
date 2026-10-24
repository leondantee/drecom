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

// Function: entry_0036f414
// Address: 0x36f414 - 0x36f430
void entry_0036f414_0x36f414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036f414_0x36f414");
#endif

    switch (ctx->pc) {
        case 0x36f41cu: goto label_36f41c;
        default: break;
    }

    ctx->pc = 0x36f414u;

    // 0x36f414: 0xc05db20  jal         func_176C80
    ctx->pc = 0x36F414u;
    SET_GPR_U32(ctx, 31, 0x36F41Cu);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x36F414u, 0x36F41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F41Cu;
label_36f41c:
    // 0x36f41c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x36f41cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36f420: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36f420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f424: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x36f424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x36f428: 0x3e00008  jr          $ra
    ctx->pc = 0x36F428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F430u;
}
