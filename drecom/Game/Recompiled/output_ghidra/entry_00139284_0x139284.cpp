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

// Function: entry_00139284
// Address: 0x139284 - 0x1392ac
void entry_00139284_0x139284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139284_0x139284");
#endif

    ctx->pc = 0x139284u;

    // 0x139284: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x139284u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x139288: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x139288u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13928c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13928cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139290: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x139290u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139294: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x139294u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139298: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x139298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13929c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13929cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1392a0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1392a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1392a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1392A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1392A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1392ACu;
}
