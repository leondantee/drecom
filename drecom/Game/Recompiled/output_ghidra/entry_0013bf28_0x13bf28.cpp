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

// Function: entry_0013bf28
// Address: 0x13bf28 - 0x13bf58
void entry_0013bf28_0x13bf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bf28_0x13bf28");
#endif

    ctx->pc = 0x13bf28u;

    // 0x13bf28: 0x26100120  addiu       $s0, $s0, 0x120
    ctx->pc = 0x13bf28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x13bf2c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x13bf2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x13bf30: 0x1660ff9b  bnez        $s3, . + 4 + (-0x65 << 2)
    ctx->pc = 0x13BF30u;
    {
        const bool branch_taken_0x13bf30 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bf30) {
            ctx->pc = 0x13BDA0u;
            return;
        }
    }
    ctx->pc = 0x13BF38u;
    // 0x13bf38: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x13bf38u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13bf3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13bf3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13bf40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13bf40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13bf44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13bf44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bf48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13bf48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bf4c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x13bf4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13bf50: 0x3e00008  jr          $ra
    ctx->pc = 0x13BF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BF58u;
}
