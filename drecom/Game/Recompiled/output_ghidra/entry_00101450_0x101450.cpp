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

// Function: entry_00101450
// Address: 0x101450 - 0x10146c
void entry_00101450_0x101450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101450_0x101450");
#endif

    ctx->pc = 0x101450u;

label_101450:
    // 0x101450: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x101450u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x101454: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x101454u;
    {
        const bool branch_taken_0x101454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101454u;
        // 0x101458: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101454) {
            ctx->pc = 0x101510u;
            return;
        }
    }
    ctx->pc = 0x10145Cu;
    // 0x10145c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10145cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101460: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x101460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x101464: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x101464u;
    {
        const bool branch_taken_0x101464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101464u;
        // 0x101468: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101464) {
            ctx->pc = 0x101450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101450;
        }
    }
    ctx->pc = 0x10146Cu;
}
