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

// Function: entry_002db7f0
// Address: 0x2db7f0 - 0x2db7f8
void entry_002db7f0_0x2db7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002db7f0_0x2db7f0");
#endif

    ctx->pc = 0x2db7f0u;

    // 0x2db7f0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2DB7F0u;
    {
        const bool branch_taken_0x2db7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db7f0) {
            ctx->pc = 0x2DB8D0u;
            return;
        }
    }
    ctx->pc = 0x2DB7F8u;
}
