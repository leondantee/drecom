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

// Function: entry_00129178
// Address: 0x129178 - 0x129180
void entry_00129178_0x129178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129178_0x129178");
#endif

    ctx->pc = 0x129178u;

    // 0x129178: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x129178u;
    {
        const bool branch_taken_0x129178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129178) {
            ctx->pc = 0x1295B0u;
            return;
        }
    }
    ctx->pc = 0x129180u;
}
