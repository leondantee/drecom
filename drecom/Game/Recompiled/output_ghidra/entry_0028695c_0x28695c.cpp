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

// Function: entry_0028695c
// Address: 0x28695c - 0x286968
void entry_0028695c_0x28695c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028695c_0x28695c");
#endif

    ctx->pc = 0x28695cu;

    // 0x28695c: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x28695cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x286960: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x286960u;
    {
        const bool branch_taken_0x286960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286960) {
            ctx->pc = 0x2869B8u;
            return;
        }
    }
    ctx->pc = 0x286968u;
}
