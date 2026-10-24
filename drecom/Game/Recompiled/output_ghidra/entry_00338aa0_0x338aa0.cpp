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

// Function: entry_00338aa0
// Address: 0x338aa0 - 0x338aa8
void entry_00338aa0_0x338aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00338aa0_0x338aa0");
#endif

    ctx->pc = 0x338aa0u;

    // 0x338aa0: 0x1e00ffe3  bgtz        $s0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x338AA0u;
    {
        const bool branch_taken_0x338aa0 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x338aa0) {
            ctx->pc = 0x338A30u;
            return;
        }
    }
    ctx->pc = 0x338AA8u;
}
