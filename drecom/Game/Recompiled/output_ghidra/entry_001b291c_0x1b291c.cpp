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

// Function: entry_001b291c
// Address: 0x1b291c - 0x1b292c
void entry_001b291c_0x1b291c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b291c_0x1b291c");
#endif

    ctx->pc = 0x1b291cu;

    // 0x1b291c: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x1b291cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1b2920: 0x26950001  addiu       $s5, $s4, 0x1
    ctx->pc = 0x1b2920u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b2924: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1B2924u;
    {
        const bool branch_taken_0x1b2924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2924) {
            ctx->pc = 0x1B2990u;
            return;
        }
    }
    ctx->pc = 0x1B292Cu;
}
