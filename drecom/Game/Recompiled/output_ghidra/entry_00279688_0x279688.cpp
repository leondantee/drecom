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

// Function: entry_00279688
// Address: 0x279688 - 0x2796a0
void entry_00279688_0x279688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00279688_0x279688");
#endif

    switch (ctx->pc) {
        case 0x279690u: goto label_279690;
        default: break;
    }

    ctx->pc = 0x279688u;

    // 0x279688: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x279688u;
    SET_GPR_U32(ctx, 31, 0x279690u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x279688u, 0x279690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279690u;
label_279690:
    // 0x279690: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x279690u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279694: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x279694u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x279698: 0x3e00008  jr          $ra
    ctx->pc = 0x279698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2796A0u;
}
