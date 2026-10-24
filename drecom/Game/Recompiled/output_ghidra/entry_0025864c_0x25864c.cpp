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

// Function: entry_0025864c
// Address: 0x25864c - 0x258658
void entry_0025864c_0x25864c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025864c_0x25864c");
#endif

    ctx->pc = 0x25864cu;

    // 0x25864c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x25864cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x258650: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x258650u;
    {
        const bool branch_taken_0x258650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258650) {
            ctx->pc = 0x258670u;
            return;
        }
    }
    ctx->pc = 0x258658u;
}
