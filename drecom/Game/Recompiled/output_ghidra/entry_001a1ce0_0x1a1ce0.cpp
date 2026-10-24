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

// Function: entry_001a1ce0
// Address: 0x1a1ce0 - 0x1a1d00
void entry_001a1ce0_0x1a1ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1ce0_0x1a1ce0");
#endif

    ctx->pc = 0x1a1ce0u;

    // 0x1a1ce0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1a1ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1ce4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a1ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1ce8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1a1ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a1cec: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1a1cecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1cf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a1cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1cf4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a1cf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a1cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1D00u;
}
