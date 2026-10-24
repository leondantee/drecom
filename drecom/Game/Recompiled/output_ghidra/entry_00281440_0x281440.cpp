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

// Function: entry_00281440
// Address: 0x281440 - 0x281458
void entry_00281440_0x281440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00281440_0x281440");
#endif

    ctx->pc = 0x281440u;

    // 0x281440: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x281440u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x281444: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x281444u;
    {
        const bool branch_taken_0x281444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281444) {
            ctx->pc = 0x2812F8u;
            return;
        }
    }
    ctx->pc = 0x28144Cu;
    // 0x28144c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x28144cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281450: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x281450u;
    {
        const bool branch_taken_0x281450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281450) {
            ctx->pc = 0x2815A0u;
            return;
        }
    }
    ctx->pc = 0x281458u;
}
