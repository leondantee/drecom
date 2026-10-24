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

// Function: entry_002f01d4
// Address: 0x2f01d4 - 0x2f01dc
void entry_002f01d4_0x2f01d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f01d4_0x2f01d4");
#endif

    ctx->pc = 0x2f01d4u;

    // 0x2f01d4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2F01D4u;
    {
        const bool branch_taken_0x2f01d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f01d4) {
            ctx->pc = 0x2F0224u;
            return;
        }
    }
    ctx->pc = 0x2F01DCu;
}
