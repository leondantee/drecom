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

// Function: entry_002eff5c
// Address: 0x2eff5c - 0x2eff64
void entry_002eff5c_0x2eff5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002eff5c_0x2eff5c");
#endif

    ctx->pc = 0x2eff5cu;

    // 0x2eff5c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2EFF5Cu;
    {
        const bool branch_taken_0x2eff5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eff5c) {
            ctx->pc = 0x2EFF64u;
            return;
        }
    }
    ctx->pc = 0x2EFF64u;
}
