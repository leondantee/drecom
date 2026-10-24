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

// Function: entry_00167078
// Address: 0x167078 - 0x167090
void entry_00167078_0x167078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167078_0x167078");
#endif

    switch (ctx->pc) {
        case 0x167080u: goto label_167080;
        default: break;
    }

    ctx->pc = 0x167078u;

    // 0x167078: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x167078u;
    SET_GPR_U32(ctx, 31, 0x167080u);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x167078u, 0x167080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167080u;
label_167080:
    // 0x167080: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x167080u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167084: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x167084u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x167088: 0x3e00008  jr          $ra
    ctx->pc = 0x167088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167090u;
}
