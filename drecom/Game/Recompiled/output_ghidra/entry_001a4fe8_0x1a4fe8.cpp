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

// Function: entry_001a4fe8
// Address: 0x1a4fe8 - 0x1a5000
void entry_001a4fe8_0x1a4fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4fe8_0x1a4fe8");
#endif

    ctx->pc = 0x1a4fe8u;

    // 0x1a4fe8: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1a4fe8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4fec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a4fecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4ff0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a4ff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4ff4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1a4ff4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a4ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5000u;
}
