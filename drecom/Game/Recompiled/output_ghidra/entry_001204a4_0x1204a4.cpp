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

// Function: entry_001204a4
// Address: 0x1204a4 - 0x1204bc
void entry_001204a4_0x1204a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001204a4_0x1204a4");
#endif

    switch (ctx->pc) {
        case 0x1204acu: goto label_1204ac;
        default: break;
    }

    ctx->pc = 0x1204a4u;

    // 0x1204a4: 0xc087084  jal         func_21C210
    ctx->pc = 0x1204A4u;
    SET_GPR_U32(ctx, 31, 0x1204ACu);
    ctx->pc = 0x21C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C210u, 0x1204A4u, 0x1204ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1204ACu;
label_1204ac:
    // 0x1204ac: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1204acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1204b0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1204b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1204b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1204B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1204B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1204BCu;
}
