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

// Function: entry_001d153c
// Address: 0x1d153c - 0x1d1544
void entry_001d153c_0x1d153c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d153c_0x1d153c");
#endif

    ctx->pc = 0x1d153cu;

    // 0x1d153c: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x1D153Cu;
    {
        const bool branch_taken_0x1d153c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d153c) {
            ctx->pc = 0x1D1930u;
            return;
        }
    }
    ctx->pc = 0x1D1544u;
}
