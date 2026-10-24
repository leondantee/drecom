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

// Function: sceDmaAddNext
// Address: 0x102ac0 - 0x102ae4
void sceDmaAddNext_0x102ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDmaAddNext_0x102ac0");
#endif

    ctx->pc = 0x102ac0u;

    // 0x102ac0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x102ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102ac4: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x102ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x102ac8: 0xa0470003  sb          $a3, 0x3($v0)
    ctx->pc = 0x102ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x102acc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x102accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102ad0: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x102ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x102ad4: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x102ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x102ad8: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x102ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x102adc: 0x3e00008  jr          $ra
    ctx->pc = 0x102ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102ADCu;
        // 0x102ae0: 0xac660004  sw          $a2, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102AE4u;
}
