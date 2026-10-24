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

// Function: entry_00126270
// Address: 0x126270 - 0x126278
void entry_00126270_0x126270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126270_0x126270");
#endif

    ctx->pc = 0x126270u;

    // 0x126270: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x126270u;
    {
        const bool branch_taken_0x126270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126270) {
            ctx->pc = 0x126548u;
            return;
        }
    }
    ctx->pc = 0x126278u;
}
