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

// Function: entry_00106f98
// Address: 0x106f98 - 0x106fa4
void entry_00106f98_0x106f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106f98_0x106f98");
#endif

    ctx->pc = 0x106f98u;

    // 0x106f98: 0xde060000  ld          $a2, 0x0($s0)
    ctx->pc = 0x106f98u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x106f9c: 0x4c0fff8  bltz        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x106F9Cu;
    {
        const bool branch_taken_0x106f9c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x106FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F9Cu;
        // 0x106fa0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f9c) {
            ctx->pc = 0x106F80u;
            return;
        }
    }
    ctx->pc = 0x106FA4u;
}
