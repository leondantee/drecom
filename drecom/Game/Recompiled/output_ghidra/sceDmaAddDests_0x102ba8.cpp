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

// Function: sceDmaAddDests
// Address: 0x102ba8 - 0x102bd4
void sceDmaAddDests_0x102ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDmaAddDests_0x102ba8");
#endif

    ctx->pc = 0x102ba8u;

    // 0x102ba8: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x102ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102bac: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x102bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x102bb0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x102bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x102bb4: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x102bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x102bb8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x102bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102bbc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x102bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102bc0: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x102bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x102bc4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x102bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x102bc8: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x102bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x102bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x102BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BCCu;
        // 0x102bd0: 0xa4650000  sh          $a1, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102BD4u;
}
