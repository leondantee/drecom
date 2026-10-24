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

// Function: entry_0016d0f4
// Address: 0x16d0f4 - 0x16d104
void entry_0016d0f4_0x16d0f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d0f4_0x16d0f4");
#endif

    ctx->pc = 0x16d0f4u;

    // 0x16d0f4: 0x291082a  slt         $at, $s4, $s1
    ctx->pc = 0x16d0f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x16d0f8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16D0F8u;
    {
        const bool branch_taken_0x16d0f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d0f8) {
            ctx->pc = 0x16D104u;
            return;
        }
    }
    ctx->pc = 0x16D100u;
    // 0x16d100: 0x7220a628  paddub      $s4, $s1, $zero
    ctx->pc = 0x16d100u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16d104u;
}
