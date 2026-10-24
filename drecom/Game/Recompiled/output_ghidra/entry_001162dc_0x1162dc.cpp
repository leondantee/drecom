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

// Function: entry_001162dc
// Address: 0x1162dc - 0x1162e8
void entry_001162dc_0x1162dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001162dc_0x1162dc");
#endif

    ctx->pc = 0x1162dcu;

    // 0x1162dc: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x1162dcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x1162e0: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1162E0u;
    {
        const bool branch_taken_0x1162e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1162E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1162E0u;
        // 0x1162e4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1162e0) {
            ctx->pc = 0x1162C0u;
            return;
        }
    }
    ctx->pc = 0x1162E8u;
}
