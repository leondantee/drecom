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

// Function: entry_00277508
// Address: 0x277508 - 0x277520
void entry_00277508_0x277508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00277508_0x277508");
#endif

    switch (ctx->pc) {
        case 0x277510u: goto label_277510;
        default: break;
    }

    ctx->pc = 0x277508u;

    // 0x277508: 0xc084934  jal         func_2124D0
    ctx->pc = 0x277508u;
    SET_GPR_U32(ctx, 31, 0x277510u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x277508u, 0x277510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277510u;
label_277510:
    // 0x277510: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x277510u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277514: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x277514u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x277518: 0x3e00008  jr          $ra
    ctx->pc = 0x277518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277520u;
}
