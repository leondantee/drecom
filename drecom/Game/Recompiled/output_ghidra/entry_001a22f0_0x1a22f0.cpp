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

// Function: entry_001a22f0
// Address: 0x1a22f0 - 0x1a2308
void entry_001a22f0_0x1a22f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a22f0_0x1a22f0");
#endif

    ctx->pc = 0x1a22f0u;

    // 0x1a22f0: 0xac231a3c  sw          $v1, 0x1A3C($at)
    ctx->pc = 0x1a22f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6716), GPR_U32(ctx, 3));
    // 0x1a22f4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1a22f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a22f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a22f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a22fc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a22fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a2300: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2308u;
}
