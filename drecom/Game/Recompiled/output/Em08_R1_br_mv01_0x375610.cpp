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

// Function: Em08_R1_br_mv01
// Address: 0x375610 - 0x375630
void Em08_R1_br_mv01_0x375610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em08_R1_br_mv01_0x375610");
#endif

    ctx->pc = 0x375610u;

    // 0x375610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x375610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x375614: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x375614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x375618: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x375618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x37561c: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x37561cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x375620: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x375620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375624: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x375624u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x375628: 0x3e00008  jr          $ra
    ctx->pc = 0x375628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375630u;
}
