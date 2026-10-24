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

// Function: entry_001289c0
// Address: 0x1289c0 - 0x1289c8
void entry_001289c0_0x1289c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001289c0_0x1289c0");
#endif

    ctx->pc = 0x1289c0u;

    // 0x1289c0: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x1289C0u;
    {
        const bool branch_taken_0x1289c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1289c0) {
            ctx->pc = 0x128D54u;
            return;
        }
    }
    ctx->pc = 0x1289C8u;
}
