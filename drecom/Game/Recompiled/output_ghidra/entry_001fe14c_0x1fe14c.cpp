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

// Function: entry_001fe14c
// Address: 0x1fe14c - 0x1fe158
void entry_001fe14c_0x1fe14c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe14c_0x1fe14c");
#endif

    ctx->pc = 0x1fe14cu;

    // 0x1fe14c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fe14cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fe150: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1FE150u;
    {
        const bool branch_taken_0x1fe150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe150) {
            ctx->pc = 0x1FE198u;
            return;
        }
    }
    ctx->pc = 0x1FE158u;
}
