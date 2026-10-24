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

// Function: entry_0021c1dc
// Address: 0x21c1dc - 0x21c1e4
void entry_0021c1dc_0x21c1dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c1dc_0x21c1dc");
#endif

    ctx->pc = 0x21c1dcu;

    // 0x21c1dc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x21C1DCu;
    {
        const bool branch_taken_0x21c1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c1dc) {
            ctx->pc = 0x21C1E4u;
            return;
        }
    }
    ctx->pc = 0x21C1E4u;
}
