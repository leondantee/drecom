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

// Function: sceDmaAddRefe
// Address: 0x102a40 - 0x102a64
void sceDmaAddRefe_0x102a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDmaAddRefe_0x102a40");
#endif

    ctx->pc = 0x102a40u;

    // 0x102a40: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x102a40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102a44: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x102a44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102a48: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x102a48u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x102a4c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x102a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102a50: 0x24670010  addiu       $a3, $v1, 0x10
    ctx->pc = 0x102a50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x102a54: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x102a54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x102a58: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x102a58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x102a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x102A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A5Cu;
        // 0x102a60: 0xac660004  sw          $a2, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102A64u;
}
