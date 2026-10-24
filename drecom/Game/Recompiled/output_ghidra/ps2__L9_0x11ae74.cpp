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

// Function: $L9
// Address: 0x11ae74 - 0x11ae98
void ps2__L9_0x11ae74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L9_0x11ae74");
#endif

    ctx->pc = 0x11ae74u;

label_11ae74:
    // 0x11ae74: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x11ae74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11ae78: 0x0  nop
    ctx->pc = 0x11ae78u;
    // NOP
    // 0x11ae7c: 0x0  nop
    ctx->pc = 0x11ae7cu;
    // NOP
    // 0x11ae80: 0x0  nop
    ctx->pc = 0x11ae80u;
    // NOP
    // 0x11ae84: 0x0  nop
    ctx->pc = 0x11ae84u;
    // NOP
    // 0x11ae88: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11AE88u;
    {
        const bool branch_taken_0x11ae88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ae88) {
            ctx->pc = 0x11AE8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AE88u;
            // 0x11ae8c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AE74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ae74;
        }
    }
    ctx->pc = 0x11AE90u;
    // 0x11ae90: 0x3e00008  jr          $ra
    ctx->pc = 0x11AE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE90u;
        // 0x11ae94: 0x871023  subu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AE98u;
}
