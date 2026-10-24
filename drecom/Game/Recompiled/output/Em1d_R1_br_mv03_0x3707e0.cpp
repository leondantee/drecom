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

// Function: Em1d_R1_br_mv03
// Address: 0x3707e0 - 0x370800
void Em1d_R1_br_mv03_0x3707e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1d_R1_br_mv03_0x3707e0");
#endif

    ctx->pc = 0x3707e0u;

    // 0x3707e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3707e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3707e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3707e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3707e8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x3707e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x3707ec: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x3707ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x3707f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3707f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3707f4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3707f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3707f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3707F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3707F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370800u;
}
