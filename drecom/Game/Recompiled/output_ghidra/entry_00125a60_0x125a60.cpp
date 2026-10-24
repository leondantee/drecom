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

// Function: entry_00125a60
// Address: 0x125a60 - 0x125a68
void entry_00125a60_0x125a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125a60_0x125a60");
#endif

    ctx->pc = 0x125a60u;

    // 0x125a60: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x125A60u;
    {
        const bool branch_taken_0x125a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125a60) {
            ctx->pc = 0x125D9Cu;
            return;
        }
    }
    ctx->pc = 0x125A68u;
}
