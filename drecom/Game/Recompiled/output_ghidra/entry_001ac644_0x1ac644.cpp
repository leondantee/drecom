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

// Function: entry_001ac644
// Address: 0x1ac644 - 0x1ac650
void entry_001ac644_0x1ac644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac644_0x1ac644");
#endif

    ctx->pc = 0x1ac644u;

    // 0x1ac644: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1ac644u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ac648: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1AC648u;
    {
        const bool branch_taken_0x1ac648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac648) {
            ctx->pc = 0x1AC680u;
            return;
        }
    }
    ctx->pc = 0x1AC650u;
}
