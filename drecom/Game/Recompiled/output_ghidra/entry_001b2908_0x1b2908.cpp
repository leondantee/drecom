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

// Function: entry_001b2908
// Address: 0x1b2908 - 0x1b291c
void entry_001b2908_0x1b2908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2908_0x1b2908");
#endif

    ctx->pc = 0x1b2908u;

    // 0x1b2908: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b2908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b290c: 0x2450b8d0  addiu       $s0, $v0, -0x4730
    ctx->pc = 0x1b290cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b2910: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1b2910u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b2914: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1B2914u;
    {
        const bool branch_taken_0x1b2914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2914) {
            ctx->pc = 0x1B29A8u;
            return;
        }
    }
    ctx->pc = 0x1B291Cu;
}
