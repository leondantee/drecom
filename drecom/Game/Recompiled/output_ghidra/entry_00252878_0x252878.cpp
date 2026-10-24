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

// Function: entry_00252878
// Address: 0x252878 - 0x252880
void entry_00252878_0x252878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252878_0x252878");
#endif

    ctx->pc = 0x252878u;

    // 0x252878: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x252878u;
    {
        const bool branch_taken_0x252878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252878) {
            ctx->pc = 0x2529ECu;
            return;
        }
    }
    ctx->pc = 0x252880u;
}
