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

// Function: entry_0019e578
// Address: 0x19e578 - 0x19e580
void entry_0019e578_0x19e578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e578_0x19e578");
#endif

    ctx->pc = 0x19e578u;

    // 0x19e578: 0x100001b2  b           . + 4 + (0x1B2 << 2)
    ctx->pc = 0x19E578u;
    {
        const bool branch_taken_0x19e578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e578) {
            ctx->pc = 0x19EC44u;
            return;
        }
    }
    ctx->pc = 0x19E580u;
}
