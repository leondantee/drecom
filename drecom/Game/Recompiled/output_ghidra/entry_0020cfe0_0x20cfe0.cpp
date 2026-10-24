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

// Function: entry_0020cfe0
// Address: 0x20cfe0 - 0x20cff8
void entry_0020cfe0_0x20cfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020cfe0_0x20cfe0");
#endif

    ctx->pc = 0x20cfe0u;

    // 0x20cfe0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x20cfe0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20cfe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20cfe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20cfe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20cfe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20cfec: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x20cfecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20cff0: 0x3e00008  jr          $ra
    ctx->pc = 0x20CFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CFF8u;
}
