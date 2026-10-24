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

// Function: entry_0016ba40
// Address: 0x16ba40 - 0x16ba50
void entry_0016ba40_0x16ba40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ba40_0x16ba40");
#endif

    ctx->pc = 0x16ba40u;

    // 0x16ba40: 0x236082a  slt         $at, $s1, $s6
    ctx->pc = 0x16ba40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x16ba44: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16BA44u;
    {
        const bool branch_taken_0x16ba44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ba44) {
            ctx->pc = 0x16BA50u;
            return;
        }
    }
    ctx->pc = 0x16BA4Cu;
    // 0x16ba4c: 0x7220b628  paddub      $s6, $s1, $zero
    ctx->pc = 0x16ba4cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16ba50u;
}
