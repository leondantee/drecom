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

// Function: entry_00340114
// Address: 0x340114 - 0x340120
void entry_00340114_0x340114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340114_0x340114");
#endif

    ctx->pc = 0x340114u;

    // 0x340114: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x340114u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340118: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x340118u;
    {
        const bool branch_taken_0x340118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340118) {
            ctx->pc = 0x340160u;
            return;
        }
    }
    ctx->pc = 0x340120u;
}
