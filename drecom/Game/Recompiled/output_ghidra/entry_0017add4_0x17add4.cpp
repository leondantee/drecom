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

// Function: entry_0017add4
// Address: 0x17add4 - 0x17ade0
void entry_0017add4_0x17add4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017add4_0x17add4");
#endif

    ctx->pc = 0x17add4u;

    // 0x17add4: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x17add4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17add8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17ADD8u;
    {
        const bool branch_taken_0x17add8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17add8) {
            ctx->pc = 0x17AE00u;
            return;
        }
    }
    ctx->pc = 0x17ADE0u;
}
