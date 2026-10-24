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

// Function: entry_0012a340
// Address: 0x12a340 - 0x12a348
void entry_0012a340_0x12a340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a340_0x12a340");
#endif

    ctx->pc = 0x12a340u;

    // 0x12a340: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x12A340u;
    {
        const bool branch_taken_0x12a340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a340) {
            ctx->pc = 0x12A534u;
            return;
        }
    }
    ctx->pc = 0x12A348u;
}
