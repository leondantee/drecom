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

// Function: entry_001df38c
// Address: 0x1df38c - 0x1df398
void entry_001df38c_0x1df38c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df38c_0x1df38c");
#endif

    ctx->pc = 0x1df38cu;

    // 0x1df38c: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x1df38cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1df390: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1DF390u;
    {
        const bool branch_taken_0x1df390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df390) {
            ctx->pc = 0x1DF448u;
            return;
        }
    }
    ctx->pc = 0x1DF398u;
}
