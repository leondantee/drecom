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

// Function: entry_00126fe0
// Address: 0x126fe0 - 0x126fe8
void entry_00126fe0_0x126fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126fe0_0x126fe0");
#endif

    ctx->pc = 0x126fe0u;

    // 0x126fe0: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x126FE0u;
    {
        const bool branch_taken_0x126fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126fe0) {
            ctx->pc = 0x127374u;
            return;
        }
    }
    ctx->pc = 0x126FE8u;
}
