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

// Function: entry_00187428
// Address: 0x187428 - 0x187430
void entry_00187428_0x187428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187428_0x187428");
#endif

    ctx->pc = 0x187428u;

    // 0x187428: 0x100001c6  b           . + 4 + (0x1C6 << 2)
    ctx->pc = 0x187428u;
    {
        const bool branch_taken_0x187428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187428) {
            ctx->pc = 0x187B44u;
            return;
        }
    }
    ctx->pc = 0x187430u;
}
