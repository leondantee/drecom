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

// Function: entry_00252818
// Address: 0x252818 - 0x252820
void entry_00252818_0x252818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252818_0x252818");
#endif

    ctx->pc = 0x252818u;

    // 0x252818: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x252818u;
    {
        const bool branch_taken_0x252818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252818) {
            ctx->pc = 0x2529ECu;
            return;
        }
    }
    ctx->pc = 0x252820u;
}
