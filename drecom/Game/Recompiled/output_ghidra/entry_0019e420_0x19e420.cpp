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

// Function: entry_0019e420
// Address: 0x19e420 - 0x19e438
void entry_0019e420_0x19e420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e420_0x19e420");
#endif

    switch (ctx->pc) {
        case 0x19e428u: goto label_19e428;
        default: break;
    }

    ctx->pc = 0x19e420u;

    // 0x19e420: 0xc067910  jal         func_19E440
    ctx->pc = 0x19E420u;
    SET_GPR_U32(ctx, 31, 0x19E428u);
    ctx->pc = 0x19E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E440u, 0x19E420u, 0x19E428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E428u;
label_19e428:
    // 0x19e428: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x19e428u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e42c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x19e42cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19e430: 0x3e00008  jr          $ra
    ctx->pc = 0x19E430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E438u;
}
