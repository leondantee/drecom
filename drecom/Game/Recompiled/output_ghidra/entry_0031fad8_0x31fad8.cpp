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

// Function: entry_0031fad8
// Address: 0x31fad8 - 0x31fae0
void entry_0031fad8_0x31fad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031fad8_0x31fad8");
#endif

    ctx->pc = 0x31fad8u;

    // 0x31fad8: 0x1600ffa5  bnez        $s0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x31FAD8u;
    {
        const bool branch_taken_0x31fad8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fad8) {
            ctx->pc = 0x31F970u;
            return;
        }
    }
    ctx->pc = 0x31FAE0u;
}
