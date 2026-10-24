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

// Function: entry_0017ac84
// Address: 0x17ac84 - 0x17ac90
void entry_0017ac84_0x17ac84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ac84_0x17ac84");
#endif

    ctx->pc = 0x17ac84u;

    // 0x17ac84: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x17ac84u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17ac88: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17AC88u;
    {
        const bool branch_taken_0x17ac88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ac88) {
            ctx->pc = 0x17ACB0u;
            return;
        }
    }
    ctx->pc = 0x17AC90u;
}
