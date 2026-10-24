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

// Function: entry_0018aaf0
// Address: 0x18aaf0 - 0x18ab04
void entry_0018aaf0_0x18aaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018aaf0_0x18aaf0");
#endif

    ctx->pc = 0x18aaf0u;

    // 0x18aaf0: 0x1a00fff8  blez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18AAF0u;
    {
        const bool branch_taken_0x18aaf0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x18aaf0) {
            ctx->pc = 0x18AAD4u;
            return;
        }
    }
    ctx->pc = 0x18AAF8u;
    // 0x18aaf8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x18aaf8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18aafc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18AAFCu;
    {
        const bool branch_taken_0x18aafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18aafc) {
            ctx->pc = 0x18AB18u;
            return;
        }
    }
    ctx->pc = 0x18AB04u;
}
