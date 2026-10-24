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

// Function: entry_00127518
// Address: 0x127518 - 0x127520
void entry_00127518_0x127518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127518_0x127518");
#endif

    ctx->pc = 0x127518u;

    // 0x127518: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x127518u;
    {
        const bool branch_taken_0x127518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127518) {
            ctx->pc = 0x127A58u;
            return;
        }
    }
    ctx->pc = 0x127520u;
}
