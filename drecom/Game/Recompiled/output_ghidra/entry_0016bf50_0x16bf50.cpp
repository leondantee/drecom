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

// Function: entry_0016bf50
// Address: 0x16bf50 - 0x16bf5c
void entry_0016bf50_0x16bf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bf50_0x16bf50");
#endif

    ctx->pc = 0x16bf50u;

    // 0x16bf50: 0x8e100018  lw          $s0, 0x18($s0)
    ctx->pc = 0x16bf50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16bf54: 0x1000ff88  b           . + 4 + (-0x78 << 2)
    ctx->pc = 0x16BF54u;
    {
        const bool branch_taken_0x16bf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bf54) {
            ctx->pc = 0x16BD78u;
            return;
        }
    }
    ctx->pc = 0x16BF5Cu;
}
