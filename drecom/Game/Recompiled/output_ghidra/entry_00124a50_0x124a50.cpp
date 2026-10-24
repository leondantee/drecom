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

// Function: entry_00124a50
// Address: 0x124a50 - 0x124a58
void entry_00124a50_0x124a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124a50_0x124a50");
#endif

    ctx->pc = 0x124a50u;

    // 0x124a50: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x124A50u;
    {
        const bool branch_taken_0x124a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124a50) {
            ctx->pc = 0x124A58u;
            return;
        }
    }
    ctx->pc = 0x124A58u;
}
