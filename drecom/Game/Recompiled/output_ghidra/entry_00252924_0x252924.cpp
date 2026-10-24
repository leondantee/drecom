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

// Function: entry_00252924
// Address: 0x252924 - 0x25292c
void entry_00252924_0x252924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252924_0x252924");
#endif

    ctx->pc = 0x252924u;

    // 0x252924: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x252924u;
    {
        const bool branch_taken_0x252924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252924) {
            ctx->pc = 0x2529ECu;
            return;
        }
    }
    ctx->pc = 0x25292Cu;
}
