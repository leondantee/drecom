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

// Function: entry_0011f528
// Address: 0x11f528 - 0x11f548
void entry_0011f528_0x11f528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f528_0x11f528");
#endif

    ctx->pc = 0x11f528u;

    // 0x11f528: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x11f528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x11f52c: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11F52Cu;
    {
        const bool branch_taken_0x11f52c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F52Cu;
        // 0x11f530: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f52c) {
            ctx->pc = 0x11F568u;
            return;
        }
    }
    ctx->pc = 0x11F534u;
    // 0x11f534: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F534u;
    {
        const bool branch_taken_0x11f534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F534u;
        // 0x11f538: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f534) {
            ctx->pc = 0x11F548u;
            return;
        }
    }
    ctx->pc = 0x11F53Cu;
    // 0x11f53c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x11f53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11f540: 0x3e00008  jr          $ra
    ctx->pc = 0x11F540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F540u;
        // 0x11f544: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F548u;
}
