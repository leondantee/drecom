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

// Function: entry_00129758
// Address: 0x129758 - 0x129760
void entry_00129758_0x129758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129758_0x129758");
#endif

    ctx->pc = 0x129758u;

    // 0x129758: 0x10000186  b           . + 4 + (0x186 << 2)
    ctx->pc = 0x129758u;
    {
        const bool branch_taken_0x129758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129758) {
            ctx->pc = 0x129D74u;
            return;
        }
    }
    ctx->pc = 0x129760u;
}
