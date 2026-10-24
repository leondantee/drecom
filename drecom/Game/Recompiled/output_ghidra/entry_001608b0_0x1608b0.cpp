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

// Function: entry_001608b0
// Address: 0x1608b0 - 0x1608cc
void entry_001608b0_0x1608b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001608b0_0x1608b0");
#endif

    ctx->pc = 0x1608b0u;

    // 0x1608b0: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1608b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1608b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1608b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1608b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1608b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1608bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1608bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1608c0: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1608c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1608c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1608C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1608C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1608CCu;
}
