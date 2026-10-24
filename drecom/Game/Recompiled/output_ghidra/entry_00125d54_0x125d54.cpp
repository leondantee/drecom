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

// Function: entry_00125d54
// Address: 0x125d54 - 0x125d5c
void entry_00125d54_0x125d54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125d54_0x125d54");
#endif

    ctx->pc = 0x125d54u;

    // 0x125d54: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x125D54u;
    {
        const bool branch_taken_0x125d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125d54) {
            ctx->pc = 0x125D9Cu;
            return;
        }
    }
    ctx->pc = 0x125D5Cu;
}
