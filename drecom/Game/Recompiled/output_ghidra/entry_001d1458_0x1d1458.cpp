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

// Function: entry_001d1458
// Address: 0x1d1458 - 0x1d1460
void entry_001d1458_0x1d1458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1458_0x1d1458");
#endif

    ctx->pc = 0x1d1458u;

    // 0x1d1458: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x1D1458u;
    {
        const bool branch_taken_0x1d1458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1458) {
            ctx->pc = 0x1D1930u;
            return;
        }
    }
    ctx->pc = 0x1D1460u;
}
