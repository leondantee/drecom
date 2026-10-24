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

// Function: entry_0016d1ac
// Address: 0x16d1ac - 0x16d1bc
void entry_0016d1ac_0x16d1ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d1ac_0x16d1ac");
#endif

    ctx->pc = 0x16d1acu;

    // 0x16d1ac: 0x25e082a  slt         $at, $s2, $fp
    ctx->pc = 0x16d1acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x16d1b0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16D1B0u;
    {
        const bool branch_taken_0x16d1b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d1b0) {
            ctx->pc = 0x16D1BCu;
            return;
        }
    }
    ctx->pc = 0x16D1B8u;
    // 0x16d1b8: 0x7240f628  paddub      $fp, $s2, $zero
    ctx->pc = 0x16d1b8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16d1bcu;
}
