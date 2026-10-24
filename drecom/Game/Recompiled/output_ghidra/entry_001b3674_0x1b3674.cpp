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

// Function: entry_001b3674
// Address: 0x1b3674 - 0x1b3680
void entry_001b3674_0x1b3674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3674_0x1b3674");
#endif

    ctx->pc = 0x1b3674u;

    // 0x1b3674: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1b3674u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b3678: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x1B3678u;
    {
        const bool branch_taken_0x1b3678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3678) {
            ctx->pc = 0x1B38CCu;
            return;
        }
    }
    ctx->pc = 0x1B3680u;
}
