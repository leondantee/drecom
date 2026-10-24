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

// Function: entry_001d8974
// Address: 0x1d8974 - 0x1d89a0
void entry_001d8974_0x1d8974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8974_0x1d8974");
#endif

    ctx->pc = 0x1d8974u;

    // 0x1d8974: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x1d8974u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d8978: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d8978u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d897c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d897cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8980: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d8980u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d8984: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d8984u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d8988: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d8988u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d898c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d898cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8990: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d8990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8994: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1d8994u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1d8998: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D89A0u;
}
