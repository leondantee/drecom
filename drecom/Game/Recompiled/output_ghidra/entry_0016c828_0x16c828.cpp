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

// Function: entry_0016c828
// Address: 0x16c828 - 0x16c838
void entry_0016c828_0x16c828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c828_0x16c828");
#endif

    ctx->pc = 0x16c828u;

    // 0x16c828: 0x256082a  slt         $at, $s2, $s6
    ctx->pc = 0x16c828u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x16c82c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16C82Cu;
    {
        const bool branch_taken_0x16c82c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c82c) {
            ctx->pc = 0x16C838u;
            return;
        }
    }
    ctx->pc = 0x16C834u;
    // 0x16c834: 0x7240b628  paddub      $s6, $s2, $zero
    ctx->pc = 0x16c834u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16c838u;
}
