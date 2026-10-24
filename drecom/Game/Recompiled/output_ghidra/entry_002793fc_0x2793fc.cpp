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

// Function: entry_002793fc
// Address: 0x2793fc - 0x279410
void entry_002793fc_0x2793fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002793fc_0x2793fc");
#endif

    ctx->pc = 0x2793fcu;

    // 0x2793fc: 0xa023d691  sb          $v1, -0x296F($at)
    ctx->pc = 0x2793fcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294956689), (uint8_t)GPR_U32(ctx, 3));
    // 0x279400: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x279400u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279404: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x279404u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x279408: 0x3e00008  jr          $ra
    ctx->pc = 0x279408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279410u;
}
