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

// Function: entry_0016b500
// Address: 0x16b500 - 0x16b510
void entry_0016b500_0x16b500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b500_0x16b500");
#endif

    ctx->pc = 0x16b500u;

    // 0x16b500: 0x270082a  slt         $at, $s3, $s0
    ctx->pc = 0x16b500u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x16b504: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16B504u;
    {
        const bool branch_taken_0x16b504 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b504) {
            ctx->pc = 0x16B510u;
            return;
        }
    }
    ctx->pc = 0x16B50Cu;
    // 0x16b50c: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x16b50cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16b510u;
}
