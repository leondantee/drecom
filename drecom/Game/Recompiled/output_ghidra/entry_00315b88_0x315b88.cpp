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

// Function: entry_00315b88
// Address: 0x315b88 - 0x315bb8
void entry_00315b88_0x315b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00315b88_0x315b88");
#endif

    ctx->pc = 0x315b88u;

    // 0x315b88: 0x2a230007  slti        $v1, $s1, 0x7
    ctx->pc = 0x315b88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x315b8c: 0x1460ff1f  bnez        $v1, . + 4 + (-0xE1 << 2)
    ctx->pc = 0x315B8Cu;
    {
        const bool branch_taken_0x315b8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x315b8c) {
            ctx->pc = 0x31580Cu;
            return;
        }
    }
    ctx->pc = 0x315B94u;
    // 0x315b94: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x315b94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x315b98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x315b98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x315b9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x315b9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x315ba0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x315ba0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x315ba4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x315ba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x315ba8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x315ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315bac: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x315bacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x315bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x315BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315BB8u;
}
