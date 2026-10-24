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

// Function: entry_001cf730
// Address: 0x1cf730 - 0x1cf738
void entry_001cf730_0x1cf730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf730_0x1cf730");
#endif

    ctx->pc = 0x1cf730u;

    // 0x1cf730: 0x10000219  b           . + 4 + (0x219 << 2)
    ctx->pc = 0x1CF730u;
    {
        const bool branch_taken_0x1cf730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf730) {
            ctx->pc = 0x1CFF98u;
            return;
        }
    }
    ctx->pc = 0x1CF738u;
}
