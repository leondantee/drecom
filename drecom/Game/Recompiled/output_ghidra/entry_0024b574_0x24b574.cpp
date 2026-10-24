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

// Function: entry_0024b574
// Address: 0x24b574 - 0x24b5a0
void entry_0024b574_0x24b574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024b574_0x24b574");
#endif

    ctx->pc = 0x24b574u;

    // 0x24b574: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x24b574u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24b578: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x24b578u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24b57c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x24b57cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24b580: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24b580u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24b584: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24b584u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24b588: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24b588u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24b58c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24b58cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b590: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24b590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b594: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x24b594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x24b598: 0x3e00008  jr          $ra
    ctx->pc = 0x24B598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B5A0u;
}
