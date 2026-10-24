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

// Function: entry_00101020
// Address: 0x101020 - 0x10103c
void entry_00101020_0x101020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101020_0x101020");
#endif

    ctx->pc = 0x101020u;

label_101020:
    // 0x101020: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x101020u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x101024: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x101024u;
    {
        const bool branch_taken_0x101024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101024u;
        // 0x101028: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101024) {
            ctx->pc = 0x10111Cu;
            return;
        }
    }
    ctx->pc = 0x10102Cu;
    // 0x10102c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10102cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101030: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x101030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x101034: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x101034u;
    {
        const bool branch_taken_0x101034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101034u;
        // 0x101038: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101034) {
            ctx->pc = 0x101020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101020;
        }
    }
    ctx->pc = 0x10103Cu;
}
