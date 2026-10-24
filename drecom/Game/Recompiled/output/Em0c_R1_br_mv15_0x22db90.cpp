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

// Function: Em0c_R1_br_mv15
// Address: 0x22db90 - 0x22dbb0
void Em0c_R1_br_mv15_0x22db90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_br_mv15_0x22db90");
#endif

    ctx->pc = 0x22db90u;

    // 0x22db90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22db90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22db94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22db94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22db98: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x22db98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x22db9c: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x22db9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x22dba0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22dba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22dba4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x22dba4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22dba8: 0x3e00008  jr          $ra
    ctx->pc = 0x22DBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DBB0u;
}
