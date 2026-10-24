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

// Function: entry_002ee81c
// Address: 0x2ee81c - 0x2ee828
void entry_002ee81c_0x2ee81c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ee81c_0x2ee81c");
#endif

    ctx->pc = 0x2ee81cu;

    // 0x2ee81c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x2ee81cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ee820: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EE820u;
    {
        const bool branch_taken_0x2ee820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee820) {
            ctx->pc = 0x2EE82Cu;
            return;
        }
    }
    ctx->pc = 0x2EE828u;
}
