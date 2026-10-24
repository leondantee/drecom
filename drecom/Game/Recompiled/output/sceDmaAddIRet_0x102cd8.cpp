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

// Function: sceDmaAddIRet
// Address: 0x102cd8 - 0x102d08
void sceDmaAddIRet_0x102cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDmaAddIRet_0x102cd8");
#endif

    ctx->pc = 0x102cd8u;

    // 0x102cd8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x102cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102cdc: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x102cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x102ce0: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x102ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x102ce4: 0xa0460003  sb          $a2, 0x3($v0)
    ctx->pc = 0x102ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x102ce8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x102ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x102cec: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x102cecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102cf0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x102cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x102cf4: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x102cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x102cf8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x102cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x102cfc: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x102cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x102d00: 0x3e00008  jr          $ra
    ctx->pc = 0x102D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D00u;
        // 0x102d04: 0xa4c50000  sh          $a1, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102D08u;
}
