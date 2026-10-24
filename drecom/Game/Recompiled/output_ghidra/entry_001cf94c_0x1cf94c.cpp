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

// Function: entry_001cf94c
// Address: 0x1cf94c - 0x1cf954
void entry_001cf94c_0x1cf94c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf94c_0x1cf94c");
#endif

    ctx->pc = 0x1cf94cu;

    // 0x1cf94c: 0x10000192  b           . + 4 + (0x192 << 2)
    ctx->pc = 0x1CF94Cu;
    {
        const bool branch_taken_0x1cf94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf94c) {
            ctx->pc = 0x1CFF98u;
            return;
        }
    }
    ctx->pc = 0x1CF954u;
}
