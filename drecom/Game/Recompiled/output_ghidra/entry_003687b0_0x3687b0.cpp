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

// Function: entry_003687b0
// Address: 0x3687b0 - 0x3687dc
void entry_003687b0_0x3687b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003687b0_0x3687b0");
#endif

    ctx->pc = 0x3687b0u;

    // 0x3687b0: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x3687b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3687b4: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3687B4u;
    {
        const bool branch_taken_0x3687b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3687b4) {
            ctx->pc = 0x36876Cu;
            return;
        }
    }
    ctx->pc = 0x3687BCu;
    // 0x3687bc: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x3687bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3687c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3687c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3687c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3687c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3687c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3687c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3687cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3687ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3687d0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x3687d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3687d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3687D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3687D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3687DCu;
}
