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

// Function: entry_00322f50
// Address: 0x322f50 - 0x322f58
void entry_00322f50_0x322f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00322f50_0x322f50");
#endif

    ctx->pc = 0x322f50u;

    // 0x322f50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x322F50u;
    {
        const bool branch_taken_0x322f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322f50) {
            ctx->pc = 0x322F6Cu;
            return;
        }
    }
    ctx->pc = 0x322F58u;
}
