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

// Function: entry_00129d34
// Address: 0x129d34 - 0x129d3c
void entry_00129d34_0x129d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129d34_0x129d34");
#endif

    ctx->pc = 0x129d34u;

    // 0x129d34: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x129D34u;
    {
        const bool branch_taken_0x129d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129d34) {
            ctx->pc = 0x129D74u;
            return;
        }
    }
    ctx->pc = 0x129D3Cu;
}
