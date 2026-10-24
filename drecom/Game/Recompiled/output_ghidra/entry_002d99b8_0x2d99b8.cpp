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

// Function: entry_002d99b8
// Address: 0x2d99b8 - 0x2d99d0
void entry_002d99b8_0x2d99b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d99b8_0x2d99b8");
#endif

    ctx->pc = 0x2d99b8u;

    // 0x2d99b8: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x2d99b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2d99bc: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2D99BCu;
    {
        const bool branch_taken_0x2d99bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d99bc) {
            ctx->pc = 0x2D9928u;
            return;
        }
    }
    ctx->pc = 0x2D99C4u;
    // 0x2d99c4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2d99c4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d99c8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2D99C8u;
    {
        const bool branch_taken_0x2d99c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d99c8) {
            ctx->pc = 0x2D9A88u;
            return;
        }
    }
    ctx->pc = 0x2D99D0u;
}
