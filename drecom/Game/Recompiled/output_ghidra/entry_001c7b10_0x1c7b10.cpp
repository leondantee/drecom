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

// Function: entry_001c7b10
// Address: 0x1c7b10 - 0x1c7b18
void entry_001c7b10_0x1c7b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7b10_0x1c7b10");
#endif

    ctx->pc = 0x1c7b10u;

    // 0x1c7b10: 0x10000214  b           . + 4 + (0x214 << 2)
    ctx->pc = 0x1C7B10u;
    {
        const bool branch_taken_0x1c7b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7b10) {
            ctx->pc = 0x1C8364u;
            return;
        }
    }
    ctx->pc = 0x1C7B18u;
}
