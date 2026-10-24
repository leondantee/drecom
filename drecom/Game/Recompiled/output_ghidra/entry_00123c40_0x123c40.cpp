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

// Function: entry_00123c40
// Address: 0x123c40 - 0x123c58
void entry_00123c40_0x123c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123c40_0x123c40");
#endif

    ctx->pc = 0x123c40u;

    // 0x123c40: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x123c40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x123c44: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x123C44u;
    {
        const bool branch_taken_0x123c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123c44) {
            ctx->pc = 0x123BF8u;
            return;
        }
    }
    ctx->pc = 0x123C4Cu;
    // 0x123c4c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x123c4cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x123c50: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x123C50u;
    {
        const bool branch_taken_0x123c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123c50) {
            ctx->pc = 0x123CA0u;
            return;
        }
    }
    ctx->pc = 0x123C58u;
}
