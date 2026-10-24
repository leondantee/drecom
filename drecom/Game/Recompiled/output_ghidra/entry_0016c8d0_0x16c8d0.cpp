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

// Function: entry_0016c8d0
// Address: 0x16c8d0 - 0x16c8e0
void entry_0016c8d0_0x16c8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c8d0_0x16c8d0");
#endif

    ctx->pc = 0x16c8d0u;

    // 0x16c8d0: 0x257082a  slt         $at, $s2, $s7
    ctx->pc = 0x16c8d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x16c8d4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16C8D4u;
    {
        const bool branch_taken_0x16c8d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c8d4) {
            ctx->pc = 0x16C8E0u;
            return;
        }
    }
    ctx->pc = 0x16C8DCu;
    // 0x16c8dc: 0x7240be28  paddub      $s7, $s2, $zero
    ctx->pc = 0x16c8dcu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16c8e0u;
}
