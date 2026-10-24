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

// Function: sceDmaAddCall
// Address: 0x102ae8 - 0x102b18
void sceDmaAddCall_0x102ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDmaAddCall_0x102ae8");
#endif

    ctx->pc = 0x102ae8u;

    // 0x102ae8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x102ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102aec: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x102aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x102af0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x102af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x102af4: 0xa0670003  sb          $a3, 0x3($v1)
    ctx->pc = 0x102af4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x102af8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x102af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x102afc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x102afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102b00: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x102b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102b04: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x102b04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x102b08: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x102b08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x102b0c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x102b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x102b10: 0x3e00008  jr          $ra
    ctx->pc = 0x102B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B10u;
        // 0x102b14: 0xa4650000  sh          $a1, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102B18u;
}
