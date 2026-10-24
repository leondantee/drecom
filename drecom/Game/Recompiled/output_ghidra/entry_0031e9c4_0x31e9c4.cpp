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

// Function: entry_0031e9c4
// Address: 0x31e9c4 - 0x31e9d0
void entry_0031e9c4_0x31e9c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031e9c4_0x31e9c4");
#endif

    ctx->pc = 0x31e9c4u;

    // 0x31e9c4: 0x36100008  ori         $s0, $s0, 0x8
    ctx->pc = 0x31e9c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
    // 0x31e9c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31E9C8u;
    {
        const bool branch_taken_0x31e9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e9c8) {
            ctx->pc = 0x31E9D4u;
            return;
        }
    }
    ctx->pc = 0x31E9D0u;
}
