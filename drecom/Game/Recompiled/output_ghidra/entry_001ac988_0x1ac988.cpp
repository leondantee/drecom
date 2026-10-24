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

// Function: entry_001ac988
// Address: 0x1ac988 - 0x1ac998
void entry_001ac988_0x1ac988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac988_0x1ac988");
#endif

    ctx->pc = 0x1ac988u;

    // 0x1ac988: 0x2e0307d0  sltiu       $v1, $s0, 0x7D0
    ctx->pc = 0x1ac988u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2000) ? 1 : 0);
    // 0x1ac98c: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1AC98Cu;
    {
        const bool branch_taken_0x1ac98c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac98c) {
            ctx->pc = 0x1AC924u;
            return;
        }
    }
    ctx->pc = 0x1AC994u;
    // 0x1ac994: 0x0  nop
    ctx->pc = 0x1ac994u;
    // NOP
    ctx->pc = 0x1ac998u;
}
