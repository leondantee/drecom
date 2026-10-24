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

// Function: entry_0016d19c
// Address: 0x16d19c - 0x16d1ac
void entry_0016d19c_0x16d19c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d19c_0x16d19c");
#endif

    ctx->pc = 0x16d19cu;

    // 0x16d19c: 0x2b1082a  slt         $at, $s5, $s1
    ctx->pc = 0x16d19cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x16d1a0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16D1A0u;
    {
        const bool branch_taken_0x16d1a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d1a0) {
            ctx->pc = 0x16D1ACu;
            return;
        }
    }
    ctx->pc = 0x16D1A8u;
    // 0x16d1a8: 0x7220ae28  paddub      $s5, $s1, $zero
    ctx->pc = 0x16d1a8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16d1acu;
}
