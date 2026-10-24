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

// Function: entry_001cdb68
// Address: 0x1cdb68 - 0x1cdb70
void entry_001cdb68_0x1cdb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdb68_0x1cdb68");
#endif

    ctx->pc = 0x1cdb68u;

    // 0x1cdb68: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1CDB68u;
    {
        const bool branch_taken_0x1cdb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdb68) {
            ctx->pc = 0x1CDB70u;
            return;
        }
    }
    ctx->pc = 0x1CDB70u;
}
