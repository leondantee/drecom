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

// Function: entry_001b1858
// Address: 0x1b1858 - 0x1b187c
void entry_001b1858_0x1b1858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1858_0x1b1858");
#endif

    ctx->pc = 0x1b1858u;

    // 0x1b1858: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x1b1858u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b185c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b185cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1860: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b1860u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1864: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b1864u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1868: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b1868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b186c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b186cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1870: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1b1870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1b1874: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B187Cu;
}
