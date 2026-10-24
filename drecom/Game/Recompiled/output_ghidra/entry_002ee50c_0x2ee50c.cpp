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

// Function: entry_002ee50c
// Address: 0x2ee50c - 0x2ee514
void entry_002ee50c_0x2ee50c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ee50c_0x2ee50c");
#endif

    ctx->pc = 0x2ee50cu;

    // 0x2ee50c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2EE50Cu;
    {
        const bool branch_taken_0x2ee50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee50c) {
            ctx->pc = 0x2EE514u;
            return;
        }
    }
    ctx->pc = 0x2EE514u;
}
