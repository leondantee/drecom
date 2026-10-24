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

// Function: entry_002536a0
// Address: 0x2536a0 - 0x2536b4
void entry_002536a0_0x2536a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002536a0_0x2536a0");
#endif

    ctx->pc = 0x2536a0u;

    // 0x2536a0: 0x16110004  bne         $s0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2536A0u;
    {
        const bool branch_taken_0x2536a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x2536a0) {
            ctx->pc = 0x2536B4u;
            return;
        }
    }
    ctx->pc = 0x2536A8u;
    // 0x2536a8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x2536a8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2536ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2536ACu;
    {
        const bool branch_taken_0x2536ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2536ac) {
            ctx->pc = 0x2536B8u;
            return;
        }
    }
    ctx->pc = 0x2536B4u;
}
