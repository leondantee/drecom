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

// Function: entry_00139bc0
// Address: 0x139bc0 - 0x139bc8
void entry_00139bc0_0x139bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139bc0_0x139bc0");
#endif

    ctx->pc = 0x139bc0u;

    // 0x139bc0: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x139BC0u;
    {
        const bool branch_taken_0x139bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139bc0) {
            ctx->pc = 0x139DD4u;
            return;
        }
    }
    ctx->pc = 0x139BC8u;
}
