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

// Function: entry_00298304
// Address: 0x298304 - 0x298328
void entry_00298304_0x298304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00298304_0x298304");
#endif

    ctx->pc = 0x298304u;

    // 0x298304: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x298304u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298308: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x298308u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29830c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29830cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298310: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x298310u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298314: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x298314u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298318: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x298318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29831c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x29831cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x298320: 0x3e00008  jr          $ra
    ctx->pc = 0x298320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298328u;
}
