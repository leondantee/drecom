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

// Function: entry_00268868
// Address: 0x268868 - 0x268880
void entry_00268868_0x268868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00268868_0x268868");
#endif

    switch (ctx->pc) {
        case 0x268870u: goto label_268870;
        default: break;
    }

    ctx->pc = 0x268868u;

    // 0x268868: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x268868u;
    SET_GPR_U32(ctx, 31, 0x268870u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x268868u, 0x268870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268870u;
label_268870:
    // 0x268870: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x268870u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268874: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x268874u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x268878: 0x3e00008  jr          $ra
    ctx->pc = 0x268878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268880u;
}
