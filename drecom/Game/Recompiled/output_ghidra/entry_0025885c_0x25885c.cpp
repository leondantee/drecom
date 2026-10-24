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

// Function: entry_0025885c
// Address: 0x25885c - 0x258868
void entry_0025885c_0x25885c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025885c_0x25885c");
#endif

    ctx->pc = 0x25885cu;

    // 0x25885c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x25885cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x258860: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x258860u;
    {
        const bool branch_taken_0x258860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258860) {
            ctx->pc = 0x258880u;
            return;
        }
    }
    ctx->pc = 0x258868u;
}
