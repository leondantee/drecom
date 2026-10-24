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

// Function: entry_0016b5b8
// Address: 0x16b5b8 - 0x16b5c8
void entry_0016b5b8_0x16b5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b5b8_0x16b5b8");
#endif

    ctx->pc = 0x16b5b8u;

    // 0x16b5b8: 0x237082a  slt         $at, $s1, $s7
    ctx->pc = 0x16b5b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x16b5bc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16B5BCu;
    {
        const bool branch_taken_0x16b5bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b5bc) {
            ctx->pc = 0x16B5C8u;
            return;
        }
    }
    ctx->pc = 0x16B5C4u;
    // 0x16b5c4: 0x7220be28  paddub      $s7, $s1, $zero
    ctx->pc = 0x16b5c4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16b5c8u;
}
