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

// Function: entry_0018f548
// Address: 0x18f548 - 0x18f554
void entry_0018f548_0x18f548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f548_0x18f548");
#endif

    ctx->pc = 0x18f548u;

    // 0x18f548: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x18f548u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18f54c: 0x10000144  b           . + 4 + (0x144 << 2)
    ctx->pc = 0x18F54Cu;
    {
        const bool branch_taken_0x18f54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f54c) {
            ctx->pc = 0x18FA60u;
            return;
        }
    }
    ctx->pc = 0x18F554u;
}
