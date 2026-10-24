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

// Function: entry_00313b94
// Address: 0x313b94 - 0x313ba0
void entry_00313b94_0x313b94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00313b94_0x313b94");
#endif

    ctx->pc = 0x313b94u;

    // 0x313b94: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x313b94u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x313b98: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x313B98u;
    {
        const bool branch_taken_0x313b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x313b98) {
            ctx->pc = 0x313C58u;
            return;
        }
    }
    ctx->pc = 0x313BA0u;
}
