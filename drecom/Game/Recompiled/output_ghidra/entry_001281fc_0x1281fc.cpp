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

// Function: entry_001281fc
// Address: 0x1281fc - 0x128204
void entry_001281fc_0x1281fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001281fc_0x1281fc");
#endif

    ctx->pc = 0x1281fcu;

    // 0x1281fc: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x1281FCu;
    {
        const bool branch_taken_0x1281fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1281fc) {
            ctx->pc = 0x1283D4u;
            return;
        }
    }
    ctx->pc = 0x128204u;
}
