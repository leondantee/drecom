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

// Function: entry_0030c1a8
// Address: 0x30c1a8 - 0x30c1c0
void entry_0030c1a8_0x30c1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030c1a8_0x30c1a8");
#endif

    ctx->pc = 0x30c1a8u;

    // 0x30c1a8: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x30c1a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x30c1ac: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x30C1ACu;
    {
        const bool branch_taken_0x30c1ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c1ac) {
            ctx->pc = 0x30C164u;
            return;
        }
    }
    ctx->pc = 0x30C1B4u;
    // 0x30c1b4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x30c1b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30c1b8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x30C1B8u;
    {
        const bool branch_taken_0x30c1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c1b8) {
            ctx->pc = 0x30C208u;
            return;
        }
    }
    ctx->pc = 0x30C1C0u;
}
