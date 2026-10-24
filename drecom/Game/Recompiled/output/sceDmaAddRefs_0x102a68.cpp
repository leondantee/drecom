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

// Function: sceDmaAddRefs
// Address: 0x102a68 - 0x102a90
void sceDmaAddRefs_0x102a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDmaAddRefs_0x102a68");
#endif

    ctx->pc = 0x102a68u;

    // 0x102a68: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x102a68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102a6c: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x102a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x102a70: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x102a70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102a74: 0xa0e80003  sb          $t0, 0x3($a3)
    ctx->pc = 0x102a74u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x102a78: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x102a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102a7c: 0x24670010  addiu       $a3, $v1, 0x10
    ctx->pc = 0x102a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x102a80: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x102a80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x102a84: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x102a84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x102a88: 0x3e00008  jr          $ra
    ctx->pc = 0x102A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A88u;
        // 0x102a8c: 0xac660004  sw          $a2, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102A90u;
}
