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

// Function: entry_0034ab80
// Address: 0x34ab80 - 0x34ab98
void entry_0034ab80_0x34ab80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034ab80_0x34ab80");
#endif

    switch (ctx->pc) {
        case 0x34ab88u: goto label_34ab88;
        default: break;
    }

    ctx->pc = 0x34ab80u;

    // 0x34ab80: 0xc0d4ed0  jal         func_353B40
    ctx->pc = 0x34AB80u;
    SET_GPR_U32(ctx, 31, 0x34AB88u);
    ctx->pc = 0x353B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353B40u, 0x34AB80u, 0x34AB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AB88u;
label_34ab88:
    // 0x34ab88: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x34ab88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34ab8c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x34ab8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34ab90: 0x3e00008  jr          $ra
    ctx->pc = 0x34AB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34AB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34AB98u;
}
