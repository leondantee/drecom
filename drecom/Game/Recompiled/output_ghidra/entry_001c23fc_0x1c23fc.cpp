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

// Function: entry_001c23fc
// Address: 0x1c23fc - 0x1c2404
void entry_001c23fc_0x1c23fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c23fc_0x1c23fc");
#endif

    ctx->pc = 0x1c23fcu;

    // 0x1c23fc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1C23FCu;
    {
        const bool branch_taken_0x1c23fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c23fc) {
            ctx->pc = 0x1C2404u;
            return;
        }
    }
    ctx->pc = 0x1C2404u;
}
