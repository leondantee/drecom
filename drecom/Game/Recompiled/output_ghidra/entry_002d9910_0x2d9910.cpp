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

// Function: entry_002d9910
// Address: 0x2d9910 - 0x2d9928
void entry_002d9910_0x2d9910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d9910_0x2d9910");
#endif

    ctx->pc = 0x2d9910u;

    // 0x2d9910: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x2d9910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2d9914: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2D9914u;
    {
        const bool branch_taken_0x2d9914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9914) {
            ctx->pc = 0x2D98ACu;
            return;
        }
    }
    ctx->pc = 0x2D991Cu;
    // 0x2d991c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2d991cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d9920: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2D9920u;
    {
        const bool branch_taken_0x2d9920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9920) {
            ctx->pc = 0x2D99B8u;
            return;
        }
    }
    ctx->pc = 0x2D9928u;
}
