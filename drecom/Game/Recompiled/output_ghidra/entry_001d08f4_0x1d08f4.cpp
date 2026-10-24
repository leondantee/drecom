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

// Function: entry_001d08f4
// Address: 0x1d08f4 - 0x1d08fc
void entry_001d08f4_0x1d08f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d08f4_0x1d08f4");
#endif

    ctx->pc = 0x1d08f4u;

    // 0x1d08f4: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1D08F4u;
    {
        const bool branch_taken_0x1d08f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d08f4) {
            ctx->pc = 0x1D0A20u;
            return;
        }
    }
    ctx->pc = 0x1D08FCu;
}
