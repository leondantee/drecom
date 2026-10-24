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

// Function: entry_001924f0
// Address: 0x1924f0 - 0x192504
void entry_001924f0_0x1924f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001924f0_0x1924f0");
#endif

    ctx->pc = 0x1924f0u;

    // 0x1924f0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1924f0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1924f4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1924f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1924f8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1924f8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1924fc: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x1924FCu;
    {
        const bool branch_taken_0x1924fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1924fc) {
            ctx->pc = 0x1927A0u;
            return;
        }
    }
    ctx->pc = 0x192504u;
}
