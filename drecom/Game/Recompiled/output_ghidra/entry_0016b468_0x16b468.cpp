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

// Function: entry_0016b468
// Address: 0x16b468 - 0x16b478
void entry_0016b468_0x16b468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b468_0x16b468");
#endif

    ctx->pc = 0x16b468u;

    // 0x16b468: 0x235082a  slt         $at, $s1, $s5
    ctx->pc = 0x16b468u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x16b46c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16B46Cu;
    {
        const bool branch_taken_0x16b46c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b46c) {
            ctx->pc = 0x16B478u;
            return;
        }
    }
    ctx->pc = 0x16B474u;
    // 0x16b474: 0x7220ae28  paddub      $s5, $s1, $zero
    ctx->pc = 0x16b474u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16b478u;
}
