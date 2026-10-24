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

// Function: entry_00129b80
// Address: 0x129b80 - 0x129b88
void entry_00129b80_0x129b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129b80_0x129b80");
#endif

    ctx->pc = 0x129b80u;

    // 0x129b80: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x129B80u;
    {
        const bool branch_taken_0x129b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129b80) {
            ctx->pc = 0x129D74u;
            return;
        }
    }
    ctx->pc = 0x129B88u;
}
