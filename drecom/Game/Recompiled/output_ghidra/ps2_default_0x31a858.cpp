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

// Function: default
// Address: 0x31a858 - 0x31a87c
void ps2_default_0x31a858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x31a858");
#endif

    ctx->pc = 0x31a858u;

    // 0x31a858: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x31a858u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31a85c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31a85cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31a860: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31a860u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31a864: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31a864u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31a868: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31a868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a86c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31a86cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a870: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x31a870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x31a874: 0x3e00008  jr          $ra
    ctx->pc = 0x31A874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A87Cu;
}
