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

// Function: entry_001940b0
// Address: 0x1940b0 - 0x1940c4
void entry_001940b0_0x1940b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001940b0_0x1940b0");
#endif

    ctx->pc = 0x1940b0u;

    // 0x1940b0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1940b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1940b4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1940b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1940b8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1940b8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1940bc: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x1940BCu;
    {
        const bool branch_taken_0x1940bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1940bc) {
            ctx->pc = 0x194360u;
            return;
        }
    }
    ctx->pc = 0x1940C4u;
}
