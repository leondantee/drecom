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

// Function: entry_0016b998
// Address: 0x16b998 - 0x16b9a8
void entry_0016b998_0x16b998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b998_0x16b998");
#endif

    ctx->pc = 0x16b998u;

    // 0x16b998: 0x235082a  slt         $at, $s1, $s5
    ctx->pc = 0x16b998u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x16b99c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16B99Cu;
    {
        const bool branch_taken_0x16b99c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b99c) {
            ctx->pc = 0x16B9A8u;
            return;
        }
    }
    ctx->pc = 0x16B9A4u;
    // 0x16b9a4: 0x7220ae28  paddub      $s5, $s1, $zero
    ctx->pc = 0x16b9a4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16b9a8u;
}
