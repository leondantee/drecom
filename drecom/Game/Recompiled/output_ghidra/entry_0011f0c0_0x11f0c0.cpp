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

// Function: entry_0011f0c0
// Address: 0x11f0c0 - 0x11f0e4
void entry_0011f0c0_0x11f0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f0c0_0x11f0c0");
#endif

    ctx->pc = 0x11f0c0u;

    // 0x11f0c0: 0xdca40010  ld          $a0, 0x10($a1)
    ctx->pc = 0x11f0c0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x11f0c4: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x11f0c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11f0c8: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x11F0C8u;
    {
        const bool branch_taken_0x11f0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f0c8) {
            ctx->pc = 0x11F0CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F0C8u;
            // 0x11f0cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F088u;
            return;
        }
    }
    ctx->pc = 0x11F0D0u;
    // 0x11f0d0: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x11f0d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11f0d4: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11F0D4u;
    {
        const bool branch_taken_0x11f0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0D4u;
        // 0x11f0d8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f0d4) {
            ctx->pc = 0x11F0B4u;
            return;
        }
    }
    ctx->pc = 0x11F0DCu;
    // 0x11f0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x11F0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0DCu;
        // 0x11f0e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F0E4u;
}
