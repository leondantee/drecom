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

// Function: entry_003154d0
// Address: 0x3154d0 - 0x315500
void entry_003154d0_0x3154d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003154d0_0x3154d0");
#endif

    ctx->pc = 0x3154d0u;

    // 0x3154d0: 0x2a230007  slti        $v1, $s1, 0x7
    ctx->pc = 0x3154d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x3154d4: 0x1460ff1f  bnez        $v1, . + 4 + (-0xE1 << 2)
    ctx->pc = 0x3154D4u;
    {
        const bool branch_taken_0x3154d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3154d4) {
            ctx->pc = 0x315154u;
            return;
        }
    }
    ctx->pc = 0x3154DCu;
    // 0x3154dc: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x3154dcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3154e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3154e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3154e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3154e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3154e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3154e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3154ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3154ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3154f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3154f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3154f4: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x3154f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3154f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3154F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3154F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315500u;
}
