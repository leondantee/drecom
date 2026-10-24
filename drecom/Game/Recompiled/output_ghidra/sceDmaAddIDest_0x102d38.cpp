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

// Function: sceDmaAddIDest
// Address: 0x102d38 - 0x102d68
void sceDmaAddIDest_0x102d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDmaAddIDest_0x102d38");
#endif

    ctx->pc = 0x102d38u;

    // 0x102d38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x102d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102d3c: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x102d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x102d40: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x102d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x102d44: 0xa0670003  sb          $a3, 0x3($v1)
    ctx->pc = 0x102d44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x102d48: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x102d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x102d4c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x102d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102d50: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x102d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102d54: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x102d54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x102d58: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x102d58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x102d5c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x102d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x102d60: 0x3e00008  jr          $ra
    ctx->pc = 0x102D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D60u;
        // 0x102d64: 0xa4650000  sh          $a1, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102D68u;
}
