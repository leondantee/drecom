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

// Function: entry_001d8b08
// Address: 0x1d8b08 - 0x1d8b10
void entry_001d8b08_0x1d8b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8b08_0x1d8b08");
#endif

    ctx->pc = 0x1d8b08u;

label_1d8b08:
    // 0x1d8b08: 0x1000ffff  b           . + 4 + (-0x1 << 2)
    ctx->pc = 0x1D8B08u;
    {
        const bool branch_taken_0x1d8b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8b08) {
            ctx->pc = 0x1D8B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8b08;
        }
    }
    ctx->pc = 0x1D8B10u;
}
