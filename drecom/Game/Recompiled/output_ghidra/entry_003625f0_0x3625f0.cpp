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

// Function: entry_003625f0
// Address: 0x3625f0 - 0x362608
void entry_003625f0_0x3625f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003625f0_0x3625f0");
#endif

    switch (ctx->pc) {
        case 0x3625f8u: goto label_3625f8;
        default: break;
    }

    ctx->pc = 0x3625f0u;

    // 0x3625f0: 0xc0d8a40  jal         func_362900
    ctx->pc = 0x3625F0u;
    SET_GPR_U32(ctx, 31, 0x3625F8u);
    ctx->pc = 0x362900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362900u, 0x3625F0u, 0x3625F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3625F8u;
label_3625f8:
    // 0x3625f8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3625f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3625fc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3625fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x362600: 0x3e00008  jr          $ra
    ctx->pc = 0x362600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362608u;
}
