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

// Function: entry_0018f2e4
// Address: 0x18f2e4 - 0x18f2f0
void entry_0018f2e4_0x18f2e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f2e4_0x18f2e4");
#endif

    ctx->pc = 0x18f2e4u;

    // 0x18f2e4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x18f2e4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18f2e8: 0x100001dd  b           . + 4 + (0x1DD << 2)
    ctx->pc = 0x18F2E8u;
    {
        const bool branch_taken_0x18f2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f2e8) {
            ctx->pc = 0x18FA60u;
            return;
        }
    }
    ctx->pc = 0x18F2F0u;
}
