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

// Function: entry_0032ac3c
// Address: 0x32ac3c - 0x32ac48
void entry_0032ac3c_0x32ac3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032ac3c_0x32ac3c");
#endif

    ctx->pc = 0x32ac3cu;

    // 0x32ac3c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x32ac3cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32ac40: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x32AC40u;
    {
        const bool branch_taken_0x32ac40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ac40) {
            ctx->pc = 0x32AC98u;
            return;
        }
    }
    ctx->pc = 0x32AC48u;
}
