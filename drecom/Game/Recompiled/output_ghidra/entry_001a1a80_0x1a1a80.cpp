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

// Function: entry_001a1a80
// Address: 0x1a1a80 - 0x1a1aa0
void entry_001a1a80_0x1a1a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1a80_0x1a1a80");
#endif

    ctx->pc = 0x1a1a80u;

    // 0x1a1a80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a1a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1a84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a1a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1a88: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1a1a88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a1a8c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1a1a8cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1a90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a1a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1a94: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a1a94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a1a98: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1AA0u;
}
