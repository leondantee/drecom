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

// Function: entry_00330358
// Address: 0x330358 - 0x330370
void entry_00330358_0x330358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00330358_0x330358");
#endif

    ctx->pc = 0x330358u;

    // 0x330358: 0x2ae20004  slti        $v0, $s7, 0x4
    ctx->pc = 0x330358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x33035c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x33035Cu;
    {
        const bool branch_taken_0x33035c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33035c) {
            ctx->pc = 0x3302F8u;
            return;
        }
    }
    ctx->pc = 0x330364u;
    // 0x330364: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x330364u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x330368: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x330368u;
    {
        const bool branch_taken_0x330368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330368) {
            ctx->pc = 0x3303C8u;
            return;
        }
    }
    ctx->pc = 0x330370u;
}
