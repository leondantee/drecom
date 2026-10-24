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

// Function: entry_00138324
// Address: 0x138324 - 0x138330
void entry_00138324_0x138324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138324_0x138324");
#endif

    ctx->pc = 0x138324u;

    // 0x138324: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x138324u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138328: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x138328u;
    {
        const bool branch_taken_0x138328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138328) {
            ctx->pc = 0x138378u;
            return;
        }
    }
    ctx->pc = 0x138330u;
}
