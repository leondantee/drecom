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

// Function: entry_0027c9b8
// Address: 0x27c9b8 - 0x27c9c8
void entry_0027c9b8_0x27c9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027c9b8_0x27c9b8");
#endif

    ctx->pc = 0x27c9b8u;

    // 0x27c9b8: 0x2e220173  sltiu       $v0, $s1, 0x173
    ctx->pc = 0x27c9b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)371) ? 1 : 0);
    // 0x27c9bc: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x27C9BCu;
    {
        const bool branch_taken_0x27c9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c9bc) {
            ctx->pc = 0x27C93Cu;
            return;
        }
    }
    ctx->pc = 0x27C9C4u;
    // 0x27c9c4: 0x0  nop
    ctx->pc = 0x27c9c4u;
    // NOP
    ctx->pc = 0x27c9c8u;
}
