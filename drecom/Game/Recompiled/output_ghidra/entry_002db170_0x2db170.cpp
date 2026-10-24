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

// Function: entry_002db170
// Address: 0x2db170 - 0x2db178
void entry_002db170_0x2db170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002db170_0x2db170");
#endif

    ctx->pc = 0x2db170u;

    // 0x2db170: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2DB170u;
    {
        const bool branch_taken_0x2db170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db170) {
            ctx->pc = 0x2DB294u;
            return;
        }
    }
    ctx->pc = 0x2DB178u;
}
