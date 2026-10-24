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

// Function: entry_00113c44
// Address: 0x113c44 - 0x113c64
void entry_00113c44_0x113c44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113c44_0x113c44");
#endif

    ctx->pc = 0x113c44u;

    // 0x113c44: 0x1a400013  blez        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x113C44u;
    {
        const bool branch_taken_0x113c44 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x113C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C44u;
        // 0x113c48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c44) {
            ctx->pc = 0x113C94u;
            return;
        }
    }
    ctx->pc = 0x113C4Cu;
    // 0x113c4c: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x113C4Cu;
    {
        const bool branch_taken_0x113c4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x113C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C4Cu;
        // 0x113c50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c4c) {
            ctx->pc = 0x113C64u;
            return;
        }
    }
    ctx->pc = 0x113C54u;
    // 0x113c54: 0x12420009  beq         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x113C54u;
    {
        const bool branch_taken_0x113c54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x113C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C54u;
        // 0x113c58: 0x8fa4014c  lw          $a0, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c54) {
            ctx->pc = 0x113C7Cu;
            return;
        }
    }
    ctx->pc = 0x113C5Cu;
    // 0x113c5c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x113C5Cu;
    {
        const bool branch_taken_0x113c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x113c5c) {
            ctx->pc = 0x113C9Cu;
            return;
        }
    }
    ctx->pc = 0x113C64u;
}
