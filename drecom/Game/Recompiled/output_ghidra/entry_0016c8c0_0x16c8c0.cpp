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

// Function: entry_0016c8c0
// Address: 0x16c8c0 - 0x16c8d0
void entry_0016c8c0_0x16c8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c8c0_0x16c8c0");
#endif

    ctx->pc = 0x16c8c0u;

    // 0x16c8c0: 0x291082a  slt         $at, $s4, $s1
    ctx->pc = 0x16c8c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x16c8c4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16C8C4u;
    {
        const bool branch_taken_0x16c8c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c8c4) {
            ctx->pc = 0x16C8D0u;
            return;
        }
    }
    ctx->pc = 0x16C8CCu;
    // 0x16c8cc: 0x7220a628  paddub      $s4, $s1, $zero
    ctx->pc = 0x16c8ccu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16c8d0u;
}
