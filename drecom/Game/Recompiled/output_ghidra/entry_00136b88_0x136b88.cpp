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

// Function: entry_00136b88
// Address: 0x136b88 - 0x136bb4
void entry_00136b88_0x136b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136b88_0x136b88");
#endif

    ctx->pc = 0x136b88u;

    // 0x136b88: 0x2a430003  slti        $v1, $s2, 0x3
    ctx->pc = 0x136b88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x136b8c: 0x1460ffa4  bnez        $v1, . + 4 + (-0x5C << 2)
    ctx->pc = 0x136B8Cu;
    {
        const bool branch_taken_0x136b8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x136b8c) {
            ctx->pc = 0x136A20u;
            return;
        }
    }
    ctx->pc = 0x136B94u;
    // 0x136b94: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x136b94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136b98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x136b98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x136b9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x136b9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136ba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x136ba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x136ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136ba8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x136ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x136bac: 0x3e00008  jr          $ra
    ctx->pc = 0x136BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136BB4u;
}
