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

// Function: entry_0016b510
// Address: 0x16b510 - 0x16b520
void entry_0016b510_0x16b510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b510_0x16b510");
#endif

    ctx->pc = 0x16b510u;

    // 0x16b510: 0x236082a  slt         $at, $s1, $s6
    ctx->pc = 0x16b510u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x16b514: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16B514u;
    {
        const bool branch_taken_0x16b514 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b514) {
            ctx->pc = 0x16B520u;
            return;
        }
    }
    ctx->pc = 0x16B51Cu;
    // 0x16b51c: 0x7220b628  paddub      $s6, $s1, $zero
    ctx->pc = 0x16b51cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16b520u;
}
