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

// Function: entry_001196c0
// Address: 0x1196c0 - 0x1196e8
void entry_001196c0_0x1196c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001196c0_0x1196c0");
#endif

    ctx->pc = 0x1196c0u;

label_1196c0:
    // 0x1196c0: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1196c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1196c4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1196c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1196c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1196c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1196cc: 0x5444fff3  bnel        $v0, $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1196CCu;
    {
        const bool branch_taken_0x1196cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1196cc) {
            ctx->pc = 0x1196D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1196CCu;
            // 0x1196d0: 0x44202b  sltu        $a0, $v0, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11969Cu;
            return;
        }
    }
    ctx->pc = 0x1196D4u;
    // 0x1196d4: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x1196d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1196d8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1196D8u;
    {
        const bool branch_taken_0x1196d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1196DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1196D8u;
        // 0x1196dc: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196d8) {
            ctx->pc = 0x1196C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1196c0;
        }
    }
    ctx->pc = 0x1196E0u;
    // 0x1196e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1196E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1196E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1196E0u;
        // 0x1196e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1196E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1196E8u;
}
