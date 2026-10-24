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

// Function: entry_0025b0f8
// Address: 0x25b0f8 - 0x25b100
void entry_0025b0f8_0x25b0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025b0f8_0x25b0f8");
#endif

    ctx->pc = 0x25b0f8u;

    // 0x25b0f8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x25B0F8u;
    {
        const bool branch_taken_0x25b0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b0f8) {
            ctx->pc = 0x25B170u;
            return;
        }
    }
    ctx->pc = 0x25B100u;
}
