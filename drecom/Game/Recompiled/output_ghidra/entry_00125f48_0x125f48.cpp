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

// Function: entry_00125f48
// Address: 0x125f48 - 0x125f50
void entry_00125f48_0x125f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125f48_0x125f48");
#endif

    ctx->pc = 0x125f48u;

    // 0x125f48: 0x1000017f  b           . + 4 + (0x17F << 2)
    ctx->pc = 0x125F48u;
    {
        const bool branch_taken_0x125f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125f48) {
            ctx->pc = 0x126548u;
            return;
        }
    }
    ctx->pc = 0x125F50u;
}
