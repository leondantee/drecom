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

// Function: entry_00374874
// Address: 0x374874 - 0x37487c
void entry_00374874_0x374874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00374874_0x374874");
#endif

    ctx->pc = 0x374874u;

    // 0x374874: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x374874u;
    {
        const bool branch_taken_0x374874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x374874) {
            ctx->pc = 0x3748B0u;
            return;
        }
    }
    ctx->pc = 0x37487Cu;
}
