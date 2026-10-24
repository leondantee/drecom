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

// Function: entry_00214b10
// Address: 0x214b10 - 0x214b18
void entry_00214b10_0x214b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214b10_0x214b10");
#endif

    ctx->pc = 0x214b10u;

    // 0x214b10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x214B10u;
    {
        const bool branch_taken_0x214b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B10u;
        // 0x214b14: 0x26120001  addiu       $s2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b10) {
            ctx->pc = 0x214B1Cu;
            return;
        }
    }
    ctx->pc = 0x214B18u;
}
