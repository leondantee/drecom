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

// Function: sceDmaAddRet
// Address: 0x102b18 - 0x102b48
void sceDmaAddRet_0x102b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDmaAddRet_0x102b18");
#endif

    ctx->pc = 0x102b18u;

    // 0x102b18: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x102b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102b1c: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x102b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x102b20: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x102b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x102b24: 0xa0460003  sb          $a2, 0x3($v0)
    ctx->pc = 0x102b24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x102b28: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x102b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x102b2c: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x102b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102b30: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x102b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x102b34: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x102b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x102b38: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x102b38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x102b3c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x102b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x102b40: 0x3e00008  jr          $ra
    ctx->pc = 0x102B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B40u;
        // 0x102b44: 0xa4c50000  sh          $a1, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102B48u;
}
