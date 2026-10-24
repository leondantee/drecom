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

// Function: entry_00283ee0
// Address: 0x283ee0 - 0x283efc
void entry_00283ee0_0x283ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00283ee0_0x283ee0");
#endif

    ctx->pc = 0x283ee0u;

    // 0x283ee0: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x283ee0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283ee4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x283ee4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283ee8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x283ee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283eec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x283eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283ef0: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x283ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x283ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x283EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283EFCu;
}
