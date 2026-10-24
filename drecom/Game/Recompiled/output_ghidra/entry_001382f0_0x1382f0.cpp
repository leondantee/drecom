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

// Function: entry_001382f0
// Address: 0x1382f0 - 0x138304
void entry_001382f0_0x1382f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001382f0_0x1382f0");
#endif

    ctx->pc = 0x1382f0u;

    // 0x1382f0: 0x2a040002  slti        $a0, $s0, 0x2
    ctx->pc = 0x1382f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1382f4: 0x1480ffec  bnez        $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1382F4u;
    {
        const bool branch_taken_0x1382f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1382f4) {
            ctx->pc = 0x1382A8u;
            return;
        }
    }
    ctx->pc = 0x1382FCu;
    // 0x1382fc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1382FCu;
    {
        const bool branch_taken_0x1382fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1382fc) {
            ctx->pc = 0x138388u;
            return;
        }
    }
    ctx->pc = 0x138304u;
}
