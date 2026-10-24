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

// Function: entry_0027552c
// Address: 0x27552c - 0x275538
void entry_0027552c_0x27552c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027552c_0x27552c");
#endif

    ctx->pc = 0x27552cu;

    // 0x27552c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x27552cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x275530: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x275530u;
    {
        const bool branch_taken_0x275530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275530) {
            ctx->pc = 0x2755C0u;
            return;
        }
    }
    ctx->pc = 0x275538u;
}
