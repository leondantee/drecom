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

// Function: entry_0011a558
// Address: 0x11a558 - 0x11a560
void entry_0011a558_0x11a558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a558_0x11a558");
#endif

    ctx->pc = 0x11a558u;

    // 0x11a558: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x11A558u;
    {
        const bool branch_taken_0x11a558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A558u;
        // 0x11a55c: 0x2139021  addu        $s2, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a558) {
            ctx->pc = 0x11A5ECu;
            return;
        }
    }
    ctx->pc = 0x11A560u;
}
