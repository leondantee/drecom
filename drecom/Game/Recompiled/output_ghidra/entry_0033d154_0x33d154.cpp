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

// Function: entry_0033d154
// Address: 0x33d154 - 0x33d160
void entry_0033d154_0x33d154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033d154_0x33d154");
#endif

    ctx->pc = 0x33d154u;

    // 0x33d154: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x33d154u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33d158: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x33D158u;
    {
        const bool branch_taken_0x33d158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d158) {
            ctx->pc = 0x33D1C0u;
            return;
        }
    }
    ctx->pc = 0x33D160u;
}
