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

// Function: entry_0011b904
// Address: 0x11b904 - 0x11b910
void entry_0011b904_0x11b904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b904_0x11b904");
#endif

    ctx->pc = 0x11b904u;

    // 0x11b904: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x11b904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11b908: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11B908u;
    {
        const bool branch_taken_0x11b908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B908u;
        // 0x11b90c: 0x52a821  addu        $s5, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b908) {
            ctx->pc = 0x11B934u;
            return;
        }
    }
    ctx->pc = 0x11B910u;
}
