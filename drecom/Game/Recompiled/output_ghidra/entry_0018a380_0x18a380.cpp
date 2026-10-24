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

// Function: entry_0018a380
// Address: 0x18a380 - 0x18a398
void entry_0018a380_0x18a380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a380_0x18a380");
#endif

    ctx->pc = 0x18a380u;

    // 0x18a380: 0x2e030040  sltiu       $v1, $s0, 0x40
    ctx->pc = 0x18a380u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x18a384: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18A384u;
    {
        const bool branch_taken_0x18a384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a384) {
            ctx->pc = 0x18A370u;
            return;
        }
    }
    ctx->pc = 0x18A38Cu;
    // 0x18a38c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x18a38cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18a390: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18A390u;
    {
        const bool branch_taken_0x18a390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a390) {
            ctx->pc = 0x18A3A8u;
            return;
        }
    }
    ctx->pc = 0x18A398u;
}
