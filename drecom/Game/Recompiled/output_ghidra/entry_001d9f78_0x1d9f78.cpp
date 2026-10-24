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

// Function: entry_001d9f78
// Address: 0x1d9f78 - 0x1d9f94
void entry_001d9f78_0x1d9f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9f78_0x1d9f78");
#endif

    ctx->pc = 0x1d9f78u;

    // 0x1d9f78: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1d9f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d9f7c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1d9f7cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9f80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d9f80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9f84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d9f84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9f88: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1d9f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d9f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9F94u;
}
