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

// Function: entry_001c96fc
// Address: 0x1c96fc - 0x1c9704
void entry_001c96fc_0x1c96fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c96fc_0x1c96fc");
#endif

    ctx->pc = 0x1c96fcu;

    // 0x1c96fc: 0x10000204  b           . + 4 + (0x204 << 2)
    ctx->pc = 0x1C96FCu;
    {
        const bool branch_taken_0x1c96fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c96fc) {
            ctx->pc = 0x1C9F10u;
            return;
        }
    }
    ctx->pc = 0x1C9704u;
}
