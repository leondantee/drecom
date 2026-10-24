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

// Function: entry_00124de0
// Address: 0x124de0 - 0x124de8
void entry_00124de0_0x124de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124de0_0x124de0");
#endif

    ctx->pc = 0x124de0u;

    // 0x124de0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x124DE0u;
    {
        const bool branch_taken_0x124de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124de0) {
            ctx->pc = 0x124DE8u;
            return;
        }
    }
    ctx->pc = 0x124DE8u;
}
