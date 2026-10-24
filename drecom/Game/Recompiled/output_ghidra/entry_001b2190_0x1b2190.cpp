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

// Function: entry_001b2190
// Address: 0x1b2190 - 0x1b21a0
void entry_001b2190_0x1b2190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2190_0x1b2190");
#endif

    ctx->pc = 0x1b2190u;

    // 0x1b2190: 0x2bc20005  slti        $v0, $fp, 0x5
    ctx->pc = 0x1b2190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1b2194: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1B2194u;
    {
        const bool branch_taken_0x1b2194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2194) {
            ctx->pc = 0x1B2154u;
            return;
        }
    }
    ctx->pc = 0x1B219Cu;
    // 0x1b219c: 0x0  nop
    ctx->pc = 0x1b219cu;
    // NOP
    ctx->pc = 0x1b21a0u;
}
