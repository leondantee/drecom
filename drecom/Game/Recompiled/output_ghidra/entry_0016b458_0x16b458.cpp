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

// Function: entry_0016b458
// Address: 0x16b458 - 0x16b468
void entry_0016b458_0x16b458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b458_0x16b458");
#endif

    ctx->pc = 0x16b458u;

    // 0x16b458: 0x250082a  slt         $at, $s2, $s0
    ctx->pc = 0x16b458u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x16b45c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16B45Cu;
    {
        const bool branch_taken_0x16b45c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b45c) {
            ctx->pc = 0x16B468u;
            return;
        }
    }
    ctx->pc = 0x16B464u;
    // 0x16b464: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x16b464u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16b468u;
}
