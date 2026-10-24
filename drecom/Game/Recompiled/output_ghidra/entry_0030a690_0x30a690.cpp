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

// Function: entry_0030a690
// Address: 0x30a690 - 0x30a6b0
void entry_0030a690_0x30a690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030a690_0x30a690");
#endif

    ctx->pc = 0x30a690u;

    // 0x30a690: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x30a690u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30a694: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30a694u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30a698: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30a698u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30a69c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30a69cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a6a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30a6a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a6a4: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x30a6a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x30a6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x30A6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A6B0u;
}
