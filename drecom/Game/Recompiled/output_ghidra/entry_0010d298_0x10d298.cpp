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

// Function: entry_0010d298
// Address: 0x10d298 - 0x10d29c
void entry_0010d298_0x10d298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d298_0x10d298");
#endif

    ctx->pc = 0x10d298u;

    // 0x10d298: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x10D298u;
    {
        const bool branch_taken_0x10d298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d298) {
            ctx->pc = 0x10D220u;
            return;
        }
    }
    ctx->pc = 0x10D2A0u;
}
