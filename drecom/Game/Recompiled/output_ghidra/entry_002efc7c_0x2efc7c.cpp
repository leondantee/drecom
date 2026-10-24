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

// Function: entry_002efc7c
// Address: 0x2efc7c - 0x2efc84
void entry_002efc7c_0x2efc7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002efc7c_0x2efc7c");
#endif

    ctx->pc = 0x2efc7cu;

    // 0x2efc7c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2EFC7Cu;
    {
        const bool branch_taken_0x2efc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efc7c) {
            ctx->pc = 0x2EFC84u;
            return;
        }
    }
    ctx->pc = 0x2EFC84u;
}
