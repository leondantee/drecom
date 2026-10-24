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

// Function: entry_0016b5a8
// Address: 0x16b5a8 - 0x16b5b8
void entry_0016b5a8_0x16b5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b5a8_0x16b5a8");
#endif

    ctx->pc = 0x16b5a8u;

    // 0x16b5a8: 0x290082a  slt         $at, $s4, $s0
    ctx->pc = 0x16b5a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x16b5ac: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16B5ACu;
    {
        const bool branch_taken_0x16b5ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b5ac) {
            ctx->pc = 0x16B5B8u;
            return;
        }
    }
    ctx->pc = 0x16B5B4u;
    // 0x16b5b4: 0x7200a628  paddub      $s4, $s0, $zero
    ctx->pc = 0x16b5b4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16b5b8u;
}
