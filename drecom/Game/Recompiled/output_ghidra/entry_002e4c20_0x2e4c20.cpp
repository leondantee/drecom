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

// Function: entry_002e4c20
// Address: 0x2e4c20 - 0x2e4c50
void entry_002e4c20_0x2e4c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e4c20_0x2e4c20");
#endif

    ctx->pc = 0x2e4c20u;

    // 0x2e4c20: 0x2a430003  slti        $v1, $s2, 0x3
    ctx->pc = 0x2e4c20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2e4c24: 0x1460fecb  bnez        $v1, . + 4 + (-0x135 << 2)
    ctx->pc = 0x2E4C24u;
    {
        const bool branch_taken_0x2e4c24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4c24) {
            ctx->pc = 0x2E4754u;
            return;
        }
    }
    ctx->pc = 0x2E4C2Cu;
    // 0x2e4c2c: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x2e4c2cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e4c30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e4c30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e4c34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e4c34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4c38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e4c38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4c3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e4c3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4c40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e4c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4c44: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2e4c44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e4c48: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4C50u;
}
