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

// Function: entry_00179e08
// Address: 0x179e08 - 0x179e10
void entry_00179e08_0x179e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179e08_0x179e08");
#endif

    ctx->pc = 0x179e08u;

    // 0x179e08: 0x1e00fff7  bgtz        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x179E08u;
    {
        const bool branch_taken_0x179e08 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x179e08) {
            ctx->pc = 0x179DE8u;
            return;
        }
    }
    ctx->pc = 0x179E10u;
}
