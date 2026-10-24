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

// Function: $L5
// Address: 0x118b7c - 0x118ba0
void ps2__L5_0x118b7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L5_0x118b7c");
#endif

    ctx->pc = 0x118b7cu;

label_118b7c:
    // 0x118b7c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x118b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x118b80: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x118b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x118b84: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x118b84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x118b88: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x118b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x118b8c: 0x0  nop
    ctx->pc = 0x118b8cu;
    // NOP
    // 0x118b90: 0x14c4fffa  bne         $a2, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x118B90u;
    {
        const bool branch_taken_0x118b90 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x118B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118B90u;
        // 0x118b94: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118b90) {
            ctx->pc = 0x118B7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118b7c;
        }
    }
    ctx->pc = 0x118B98u;
    // 0x118b98: 0x3e00008  jr          $ra
    ctx->pc = 0x118B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118B98u;
        // 0x118b9c: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118BA0u;
}
