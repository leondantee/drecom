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

// Function: entry_00189e44
// Address: 0x189e44 - 0x189e4c
void entry_00189e44_0x189e44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189e44_0x189e44");
#endif

    ctx->pc = 0x189e44u;

    // 0x189e44: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x189E44u;
    {
        const bool branch_taken_0x189e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189e44) {
            ctx->pc = 0x18A070u;
            return;
        }
    }
    ctx->pc = 0x189E4Cu;
}
