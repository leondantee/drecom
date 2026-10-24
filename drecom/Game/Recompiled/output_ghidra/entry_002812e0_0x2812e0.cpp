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

// Function: entry_002812e0
// Address: 0x2812e0 - 0x2812f8
void entry_002812e0_0x2812e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002812e0_0x2812e0");
#endif

    ctx->pc = 0x2812e0u;

    // 0x2812e0: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x2812e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2812e4: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x2812E4u;
    {
        const bool branch_taken_0x2812e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2812e4) {
            ctx->pc = 0x281198u;
            return;
        }
    }
    ctx->pc = 0x2812ECu;
    // 0x2812ec: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2812ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2812f0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2812F0u;
    {
        const bool branch_taken_0x2812f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2812f0) {
            ctx->pc = 0x281440u;
            return;
        }
    }
    ctx->pc = 0x2812F8u;
}
