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

// Function: entry_00138420
// Address: 0x138420 - 0x138438
void entry_00138420_0x138420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138420_0x138420");
#endif

    ctx->pc = 0x138420u;

    // 0x138420: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x138420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x138424: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x138424u;
    {
        const bool branch_taken_0x138424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138424) {
            ctx->pc = 0x1383F8u;
            return;
        }
    }
    ctx->pc = 0x13842Cu;
    // 0x13842c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x13842cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138430: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x138430u;
    {
        const bool branch_taken_0x138430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138430) {
            ctx->pc = 0x138460u;
            return;
        }
    }
    ctx->pc = 0x138438u;
}
