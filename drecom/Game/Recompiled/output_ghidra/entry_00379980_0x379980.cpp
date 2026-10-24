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

// Function: entry_00379980
// Address: 0x379980 - 0x379998
void entry_00379980_0x379980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00379980_0x379980");
#endif

    switch (ctx->pc) {
        case 0x379988u: goto label_379988;
        default: break;
    }

    ctx->pc = 0x379980u;

    // 0x379980: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x379980u;
    SET_GPR_U32(ctx, 31, 0x379988u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x379980u, 0x379988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379988u;
label_379988:
    // 0x379988: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x379988u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37998c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x37998cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x379990: 0x3e00008  jr          $ra
    ctx->pc = 0x379990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379998u;
}
