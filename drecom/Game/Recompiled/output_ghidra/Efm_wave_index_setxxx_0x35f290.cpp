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

// Function: Efm_wave_index_setxxx
// Address: 0x35f290 - 0x35f2b0
void Efm_wave_index_setxxx_0x35f290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Efm_wave_index_setxxx_0x35f290");
#endif

    ctx->pc = 0x35f290u;

    // 0x35f290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35f290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35f294: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35f294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35f298: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x35f298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x35f29c: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x35f29cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x35f2a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35f2a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f2a4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35f2a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35f2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x35F2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F2B0u;
}
