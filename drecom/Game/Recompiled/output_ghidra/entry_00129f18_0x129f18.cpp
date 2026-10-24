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

// Function: entry_00129f18
// Address: 0x129f18 - 0x129f20
void entry_00129f18_0x129f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129f18_0x129f18");
#endif

    ctx->pc = 0x129f18u;

    // 0x129f18: 0x10000186  b           . + 4 + (0x186 << 2)
    ctx->pc = 0x129F18u;
    {
        const bool branch_taken_0x129f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129f18) {
            ctx->pc = 0x12A534u;
            return;
        }
    }
    ctx->pc = 0x129F20u;
}
