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

// Function: entry_00128ef8
// Address: 0x128ef8 - 0x128f00
void entry_00128ef8_0x128ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128ef8_0x128ef8");
#endif

    ctx->pc = 0x128ef8u;

    // 0x128ef8: 0x100001ad  b           . + 4 + (0x1AD << 2)
    ctx->pc = 0x128EF8u;
    {
        const bool branch_taken_0x128ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128ef8) {
            ctx->pc = 0x1295B0u;
            return;
        }
    }
    ctx->pc = 0x128F00u;
}
