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

// Function: entry_002632c8
// Address: 0x2632c8 - 0x2632d0
void entry_002632c8_0x2632c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002632c8_0x2632c8");
#endif

    ctx->pc = 0x2632c8u;

    // 0x2632c8: 0x1520ff52  bnez        $t1, . + 4 + (-0xAE << 2)
    ctx->pc = 0x2632C8u;
    {
        const bool branch_taken_0x2632c8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x2632c8) {
            ctx->pc = 0x263014u;
            return;
        }
    }
    ctx->pc = 0x2632D0u;
}
