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

// Function: entry_001dc7cc
// Address: 0x1dc7cc - 0x1dc7e0
void entry_001dc7cc_0x1dc7cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc7cc_0x1dc7cc");
#endif

    ctx->pc = 0x1dc7ccu;

    // 0x1dc7cc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1dc7ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc7d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dc7d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc7d4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1dc7d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1dc7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC7E0u;
}
