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

// Function: entry_00314d50
// Address: 0x314d50 - 0x314d80
void entry_00314d50_0x314d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00314d50_0x314d50");
#endif

    ctx->pc = 0x314d50u;

    // 0x314d50: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x314d50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x314d54: 0x1460fef8  bnez        $v1, . + 4 + (-0x108 << 2)
    ctx->pc = 0x314D54u;
    {
        const bool branch_taken_0x314d54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x314d54) {
            ctx->pc = 0x314938u;
            return;
        }
    }
    ctx->pc = 0x314D5Cu;
    // 0x314d5c: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x314d5cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x314d60: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x314d60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x314d64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x314d64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x314d68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x314d68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x314d6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x314d6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314d70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x314d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314d74: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x314d74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x314d78: 0x3e00008  jr          $ra
    ctx->pc = 0x314D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314D80u;
}
