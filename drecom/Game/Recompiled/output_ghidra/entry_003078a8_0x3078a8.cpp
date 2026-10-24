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

// Function: entry_003078a8
// Address: 0x3078a8 - 0x3078b0
void entry_003078a8_0x3078a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003078a8_0x3078a8");
#endif

    ctx->pc = 0x3078a8u;

    // 0x3078a8: 0x100001ff  b           . + 4 + (0x1FF << 2)
    ctx->pc = 0x3078A8u;
    {
        const bool branch_taken_0x3078a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3078a8) {
            ctx->pc = 0x3080A8u;
            return;
        }
    }
    ctx->pc = 0x3078B0u;
}
