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

// Function: entry_0018534c
// Address: 0x18534c - 0x185358
void entry_0018534c_0x18534c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018534c_0x18534c");
#endif

    ctx->pc = 0x18534cu;

    // 0x18534c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x18534cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x185350: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x185350u;
    {
        const bool branch_taken_0x185350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185350) {
            ctx->pc = 0x185398u;
            return;
        }
    }
    ctx->pc = 0x185358u;
}
