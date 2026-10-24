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

// Function: sceDmaAddCont
// Address: 0x102a90 - 0x102ac0
void sceDmaAddCont_0x102a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDmaAddCont_0x102a90");
#endif

    ctx->pc = 0x102a90u;

    // 0x102a90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x102a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102a94: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x102a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x102a98: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x102a98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x102a9c: 0xa0460003  sb          $a2, 0x3($v0)
    ctx->pc = 0x102a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x102aa0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x102aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x102aa4: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x102aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102aa8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x102aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x102aac: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x102aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x102ab0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x102ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x102ab4: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x102ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x102ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x102AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102AB8u;
        // 0x102abc: 0xa4c50000  sh          $a1, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102AC0u;
}
