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

// Function: entry_001b36fc
// Address: 0x1b36fc - 0x1b3708
void entry_001b36fc_0x1b36fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b36fc_0x1b36fc");
#endif

    ctx->pc = 0x1b36fcu;

    // 0x1b36fc: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1b36fcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b3700: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1B3700u;
    {
        const bool branch_taken_0x1b3700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3700) {
            ctx->pc = 0x1B38CCu;
            return;
        }
    }
    ctx->pc = 0x1B3708u;
}
