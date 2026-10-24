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

// Function: entry_0016c818
// Address: 0x16c818 - 0x16c828
void entry_0016c818_0x16c818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c818_0x16c818");
#endif

    ctx->pc = 0x16c818u;

    // 0x16c818: 0x271082a  slt         $at, $s3, $s1
    ctx->pc = 0x16c818u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x16c81c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16C81Cu;
    {
        const bool branch_taken_0x16c81c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c81c) {
            ctx->pc = 0x16C828u;
            return;
        }
    }
    ctx->pc = 0x16C824u;
    // 0x16c824: 0x72209e28  paddub      $s3, $s1, $zero
    ctx->pc = 0x16c824u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16c828u;
}
