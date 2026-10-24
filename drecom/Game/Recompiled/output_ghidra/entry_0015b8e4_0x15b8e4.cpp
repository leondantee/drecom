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

// Function: entry_0015b8e4
// Address: 0x15b8e4 - 0x15b8f0
void entry_0015b8e4_0x15b8e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b8e4_0x15b8e4");
#endif

    ctx->pc = 0x15b8e4u;

    // 0x15b8e4: 0xa2001920  sb          $zero, 0x1920($s0)
    ctx->pc = 0x15b8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6432), (uint8_t)GPR_U32(ctx, 0));
    // 0x15b8e8: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x15B8E8u;
    {
        const bool branch_taken_0x15b8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b8e8) {
            ctx->pc = 0x15BA44u;
            return;
        }
    }
    ctx->pc = 0x15B8F0u;
}
