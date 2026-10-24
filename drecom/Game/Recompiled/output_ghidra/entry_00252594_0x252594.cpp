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

// Function: entry_00252594
// Address: 0x252594 - 0x25259c
void entry_00252594_0x252594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252594_0x252594");
#endif

    ctx->pc = 0x252594u;

    // 0x252594: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x252594u;
    {
        const bool branch_taken_0x252594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252594) {
            ctx->pc = 0x2529ECu;
            return;
        }
    }
    ctx->pc = 0x25259Cu;
}
