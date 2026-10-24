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

// Function: entry_0021d040
// Address: 0x21d040 - 0x21d048
void entry_0021d040_0x21d040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021d040_0x21d040");
#endif

    ctx->pc = 0x21d040u;

    // 0x21d040: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x21D040u;
    {
        const bool branch_taken_0x21d040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d040) {
            ctx->pc = 0x21D048u;
            return;
        }
    }
    ctx->pc = 0x21D048u;
}
