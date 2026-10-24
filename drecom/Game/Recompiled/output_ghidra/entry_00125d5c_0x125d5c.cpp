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

// Function: entry_00125d5c
// Address: 0x125d5c - 0x125d64
void entry_00125d5c_0x125d5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125d5c_0x125d5c");
#endif

    ctx->pc = 0x125d5cu;

    // 0x125d5c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x125D5Cu;
    {
        const bool branch_taken_0x125d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125d5c) {
            ctx->pc = 0x125D9Cu;
            return;
        }
    }
    ctx->pc = 0x125D64u;
}
