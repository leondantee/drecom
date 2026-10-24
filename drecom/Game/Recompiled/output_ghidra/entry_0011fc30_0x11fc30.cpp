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

// Function: entry_0011fc30
// Address: 0x11fc30 - 0x11fc4c
void entry_0011fc30_0x11fc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fc30_0x11fc30");
#endif

    ctx->pc = 0x11fc30u;

    // 0x11fc30: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x11FC30u;
    {
        const bool branch_taken_0x11fc30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fc30) {
            ctx->pc = 0x11FC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FC30u;
            // 0x11fc34: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FC4Cu;
            return;
        }
    }
    ctx->pc = 0x11FC38u;
    // 0x11fc38: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x11fc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11fc3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11fc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11fc40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11fc44: 0x3e00008  jr          $ra
    ctx->pc = 0x11FC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC44u;
        // 0x11fc48: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FC4Cu;
}
