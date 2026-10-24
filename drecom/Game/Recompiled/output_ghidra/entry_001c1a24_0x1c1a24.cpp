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

// Function: entry_001c1a24
// Address: 0x1c1a24 - 0x1c1a30
void entry_001c1a24_0x1c1a24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1a24_0x1c1a24");
#endif

    ctx->pc = 0x1c1a24u;

    // 0x1c1a24: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1c1a24u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c1a28: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1C1A28u;
    {
        const bool branch_taken_0x1c1a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1a28) {
            ctx->pc = 0x1C1A98u;
            return;
        }
    }
    ctx->pc = 0x1C1A30u;
}
