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

// Function: entry_0018a330
// Address: 0x18a330 - 0x18a348
void entry_0018a330_0x18a330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a330_0x18a330");
#endif

    ctx->pc = 0x18a330u;

    // 0x18a330: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x18a330u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x18a334: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18A334u;
    {
        const bool branch_taken_0x18a334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a334) {
            ctx->pc = 0x18A320u;
            return;
        }
    }
    ctx->pc = 0x18A33Cu;
    // 0x18a33c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x18a33cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18a340: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18A340u;
    {
        const bool branch_taken_0x18a340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a340) {
            ctx->pc = 0x18A358u;
            return;
        }
    }
    ctx->pc = 0x18A348u;
}
