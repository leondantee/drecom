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

// Function: entry_00252330
// Address: 0x252330 - 0x252338
void entry_00252330_0x252330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252330_0x252330");
#endif

    ctx->pc = 0x252330u;

    // 0x252330: 0x100001ae  b           . + 4 + (0x1AE << 2)
    ctx->pc = 0x252330u;
    {
        const bool branch_taken_0x252330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252330) {
            ctx->pc = 0x2529ECu;
            return;
        }
    }
    ctx->pc = 0x252338u;
}
