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

// Function: entry_003221d0
// Address: 0x3221d0 - 0x3221e8
void entry_003221d0_0x3221d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003221d0_0x3221d0");
#endif

    ctx->pc = 0x3221d0u;

    // 0x3221d0: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x3221d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3221d4: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x3221D4u;
    {
        const bool branch_taken_0x3221d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3221d4) {
            ctx->pc = 0x322168u;
            return;
        }
    }
    ctx->pc = 0x3221DCu;
    // 0x3221dc: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x3221dcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3221e0: 0x1000016f  b           . + 4 + (0x16F << 2)
    ctx->pc = 0x3221E0u;
    {
        const bool branch_taken_0x3221e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3221e0) {
            ctx->pc = 0x3227A0u;
            return;
        }
    }
    ctx->pc = 0x3221E8u;
}
