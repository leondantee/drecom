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

// Function: entry_001d9678
// Address: 0x1d9678 - 0x1d9690
void entry_001d9678_0x1d9678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9678_0x1d9678");
#endif

    switch (ctx->pc) {
        case 0x1d9680u: goto label_1d9680;
        default: break;
    }

    ctx->pc = 0x1d9678u;

    // 0x1d9678: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x1D9678u;
    SET_GPR_U32(ctx, 31, 0x1D9680u);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x1D9678u, 0x1D9680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9680u;
label_1d9680:
    // 0x1d9680: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1d9680u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9684: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d9684u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d9688: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9690u;
}
