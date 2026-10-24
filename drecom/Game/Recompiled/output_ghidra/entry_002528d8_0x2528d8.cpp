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

// Function: entry_002528d8
// Address: 0x2528d8 - 0x2528e0
void entry_002528d8_0x2528d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002528d8_0x2528d8");
#endif

    ctx->pc = 0x2528d8u;

    // 0x2528d8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2528D8u;
    {
        const bool branch_taken_0x2528d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2528d8) {
            ctx->pc = 0x2529ECu;
            return;
        }
    }
    ctx->pc = 0x2528E0u;
}
