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

// Function: entry_002946a0
// Address: 0x2946a0 - 0x2946dc
void entry_002946a0_0x2946a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002946a0_0x2946a0");
#endif

    ctx->pc = 0x2946a0u;

    // 0x2946a0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x2946a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x2946a4: 0x8c236880  lw          $v1, 0x6880($at)
    ctx->pc = 0x2946a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x396880u));
    // 0x2946a8: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x2946a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x2946ac: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x2946acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2946b0: 0x1460ff97  bnez        $v1, . + 4 + (-0x69 << 2)
    ctx->pc = 0x2946B0u;
    {
        const bool branch_taken_0x2946b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2946b0) {
            ctx->pc = 0x294510u;
            return;
        }
    }
    ctx->pc = 0x2946B8u;
    // 0x2946b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2946b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2946bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2946bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2946c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2946c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2946c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2946c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2946c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2946c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2946cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2946ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2946d0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2946d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2946d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2946D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2946D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2946DCu;
}
