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

// Function: entry_001b28f8
// Address: 0x1b28f8 - 0x1b2908
void entry_001b28f8_0x1b28f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b28f8_0x1b28f8");
#endif

    ctx->pc = 0x1b28f8u;

    // 0x1b28f8: 0x2ae20005  slti        $v0, $s7, 0x5
    ctx->pc = 0x1b28f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1b28fc: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1B28FCu;
    {
        const bool branch_taken_0x1b28fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b28fc) {
            ctx->pc = 0x1B28CCu;
            return;
        }
    }
    ctx->pc = 0x1B2904u;
    // 0x1b2904: 0x0  nop
    ctx->pc = 0x1b2904u;
    // NOP
    ctx->pc = 0x1b2908u;
}
