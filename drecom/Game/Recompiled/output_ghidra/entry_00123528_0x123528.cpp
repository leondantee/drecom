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

// Function: entry_00123528
// Address: 0x123528 - 0x12354c
void entry_00123528_0x123528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123528_0x123528");
#endif

    ctx->pc = 0x123528u;

    // 0x123528: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x123528u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12352c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12352cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x123530: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x123530u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x123534: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x123534u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123538: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x123538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12353c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12353cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123540: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x123540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x123544: 0x3e00008  jr          $ra
    ctx->pc = 0x123544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12354Cu;
}
