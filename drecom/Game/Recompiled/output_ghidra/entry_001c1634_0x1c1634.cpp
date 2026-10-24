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

// Function: entry_001c1634
// Address: 0x1c1634 - 0x1c163c
void entry_001c1634_0x1c1634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1634_0x1c1634");
#endif

    ctx->pc = 0x1c1634u;

    // 0x1c1634: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1C1634u;
    {
        const bool branch_taken_0x1c1634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1634) {
            ctx->pc = 0x1C163Cu;
            return;
        }
    }
    ctx->pc = 0x1C163Cu;
}
