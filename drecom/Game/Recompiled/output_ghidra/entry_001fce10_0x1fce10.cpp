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

// Function: entry_001fce10
// Address: 0x1fce10 - 0x1fce1c
void entry_001fce10_0x1fce10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fce10_0x1fce10");
#endif

    ctx->pc = 0x1fce10u;

    // 0x1fce10: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fce10u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fce14: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1FCE14u;
    {
        const bool branch_taken_0x1fce14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fce14) {
            ctx->pc = 0x1FCE80u;
            return;
        }
    }
    ctx->pc = 0x1FCE1Cu;
}
