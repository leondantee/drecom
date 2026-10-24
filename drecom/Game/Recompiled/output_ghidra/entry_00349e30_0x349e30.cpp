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

// Function: entry_00349e30
// Address: 0x349e30 - 0x349e38
void entry_00349e30_0x349e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00349e30_0x349e30");
#endif

    ctx->pc = 0x349e30u;

    // 0x349e30: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x349E30u;
    {
        const bool branch_taken_0x349e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x349e30) {
            ctx->pc = 0x349F44u;
            return;
        }
    }
    ctx->pc = 0x349E38u;
}
