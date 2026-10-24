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

// Function: entry_0016bae8
// Address: 0x16bae8 - 0x16baf8
void entry_0016bae8_0x16bae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bae8_0x16bae8");
#endif

    ctx->pc = 0x16bae8u;

    // 0x16bae8: 0x237082a  slt         $at, $s1, $s7
    ctx->pc = 0x16bae8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x16baec: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16BAECu;
    {
        const bool branch_taken_0x16baec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16baec) {
            ctx->pc = 0x16BAF8u;
            return;
        }
    }
    ctx->pc = 0x16BAF4u;
    // 0x16baf4: 0x7220be28  paddub      $s7, $s1, $zero
    ctx->pc = 0x16baf4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16baf8u;
}
