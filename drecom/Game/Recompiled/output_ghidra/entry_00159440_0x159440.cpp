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

// Function: entry_00159440
// Address: 0x159440 - 0x159458
void entry_00159440_0x159440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159440_0x159440");
#endif

    switch (ctx->pc) {
        case 0x159448u: goto label_159448;
        default: break;
    }

    ctx->pc = 0x159440u;

    // 0x159440: 0xc0567fc  jal         func_159FF0
    ctx->pc = 0x159440u;
    SET_GPR_U32(ctx, 31, 0x159448u);
    ctx->pc = 0x159FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159FF0u, 0x159440u, 0x159448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159448u;
label_159448:
    // 0x159448: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x159448u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15944c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x15944cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x159450: 0x3e00008  jr          $ra
    ctx->pc = 0x159450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159458u;
}
