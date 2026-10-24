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

// Function: entry_001d8798
// Address: 0x1d8798 - 0x1d87c0
void entry_001d8798_0x1d8798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8798_0x1d8798");
#endif

    ctx->pc = 0x1d8798u;

    // 0x1d8798: 0x72201e28  paddub      $v1, $s1, $zero
    ctx->pc = 0x1d8798u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1d879c: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x1d879cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d87a0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D87A0u;
    {
        const bool branch_taken_0x1d87a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d87a0) {
            ctx->pc = 0x1D878Cu;
            return;
        }
    }
    ctx->pc = 0x1D87A8u;
    // 0x1d87a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d87a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d87ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d87acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d87b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d87b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d87b4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d87b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d87b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D87B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D87B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D87C0u;
}
