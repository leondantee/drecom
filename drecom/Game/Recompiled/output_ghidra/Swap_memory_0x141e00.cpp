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

// Function: Swap_memory
// Address: 0x141e00 - 0x141e5c
void Swap_memory_0x141e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Swap_memory_0x141e00");
#endif

    switch (ctx->pc) {
        case 0x141e20u: goto label_141e20;
        default: break;
    }

    ctx->pc = 0x141e00u;

    // 0x141e00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x141e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141e04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x141e08: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x141e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x141e0c: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x141e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x141e10: 0x8e060a70  lw          $a2, 0xA70($s0)
    ctx->pc = 0x141e10u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x141e14: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x141e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x141e18: 0x24658f10  addiu       $a1, $v1, -0x70F0
    ctx->pc = 0x141e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938384));
    // 0x141e1c: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x141e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_141e20:
    // 0x141e20: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x141e20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x141e24: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x141e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x141e28: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x141e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x141e2c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x141e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x141e30: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x141e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x141e34: 0x1c80fffa  bgtz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x141E34u;
    {
        const bool branch_taken_0x141e34 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x141e34) {
            ctx->pc = 0x141E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141e20;
        }
    }
    ctx->pc = 0x141E3Cu;
    // 0x141e3c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x141e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x141e40: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x141e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x141e44: 0x24638f10  addiu       $v1, $v1, -0x70F0
    ctx->pc = 0x141e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938384));
    // 0x141e48: 0xae030a74  sw          $v1, 0xA74($s0)
    ctx->pc = 0x141e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2676), GPR_U32(ctx, 3));
    // 0x141e4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141e4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141e50: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x141e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x141e54: 0x3e00008  jr          $ra
    ctx->pc = 0x141E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141E5Cu;
}
