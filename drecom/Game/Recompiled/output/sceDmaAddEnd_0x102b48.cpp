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

// Function: sceDmaAddEnd
// Address: 0x102b48 - 0x102b78
void sceDmaAddEnd_0x102b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDmaAddEnd_0x102b48");
#endif

    ctx->pc = 0x102b48u;

    // 0x102b48: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x102b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102b4c: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x102b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x102b50: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x102b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x102b54: 0xa0670003  sb          $a3, 0x3($v1)
    ctx->pc = 0x102b54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x102b58: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x102b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x102b5c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x102b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102b60: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x102b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102b64: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x102b64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x102b68: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x102b68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x102b6c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x102b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x102b70: 0x3e00008  jr          $ra
    ctx->pc = 0x102B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B70u;
        // 0x102b74: 0xa4650000  sh          $a1, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102B78u;
}
