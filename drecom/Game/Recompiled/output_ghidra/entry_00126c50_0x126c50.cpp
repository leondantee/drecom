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

// Function: entry_00126c50
// Address: 0x126c50 - 0x126c58
void entry_00126c50_0x126c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126c50_0x126c50");
#endif

    ctx->pc = 0x126c50u;

    // 0x126c50: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x126C50u;
    {
        const bool branch_taken_0x126c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126c50) {
            ctx->pc = 0x126DDCu;
            return;
        }
    }
    ctx->pc = 0x126C58u;
}
