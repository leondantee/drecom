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

// Function: entry_002831f0
// Address: 0x2831f0 - 0x283208
void entry_002831f0_0x2831f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002831f0_0x2831f0");
#endif

    ctx->pc = 0x2831f0u;

    // 0x2831f0: 0x2e030027  sltiu       $v1, $s0, 0x27
    ctx->pc = 0x2831f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)39) ? 1 : 0);
    // 0x2831f4: 0x1460ffa8  bnez        $v1, . + 4 + (-0x58 << 2)
    ctx->pc = 0x2831F4u;
    {
        const bool branch_taken_0x2831f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2831f4) {
            ctx->pc = 0x283098u;
            return;
        }
    }
    ctx->pc = 0x2831FCu;
    // 0x2831fc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2831fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x283200: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x283200u;
    {
        const bool branch_taken_0x283200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283200) {
            ctx->pc = 0x283260u;
            return;
        }
    }
    ctx->pc = 0x283208u;
}
