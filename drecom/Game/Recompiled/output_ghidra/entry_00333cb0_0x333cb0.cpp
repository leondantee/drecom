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

// Function: entry_00333cb0
// Address: 0x333cb0 - 0x333cbc
void entry_00333cb0_0x333cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00333cb0_0x333cb0");
#endif

    ctx->pc = 0x333cb0u;

    // 0x333cb0: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x333cb0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x333cb4: 0x10000154  b           . + 4 + (0x154 << 2)
    ctx->pc = 0x333CB4u;
    {
        const bool branch_taken_0x333cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333cb4) {
            ctx->pc = 0x334208u;
            return;
        }
    }
    ctx->pc = 0x333CBCu;
}
