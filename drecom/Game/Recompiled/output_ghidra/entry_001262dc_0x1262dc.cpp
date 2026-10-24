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

// Function: entry_001262dc
// Address: 0x1262dc - 0x1262e4
void entry_001262dc_0x1262dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001262dc_0x1262dc");
#endif

    ctx->pc = 0x1262dcu;

    // 0x1262dc: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x1262DCu;
    {
        const bool branch_taken_0x1262dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1262dc) {
            ctx->pc = 0x126548u;
            return;
        }
    }
    ctx->pc = 0x1262E4u;
}
