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

// Function: entry_00325158
// Address: 0x325158 - 0x325170
void entry_00325158_0x325158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00325158_0x325158");
#endif

    ctx->pc = 0x325158u;

    // 0x325158: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x325158u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x32515c: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x32515Cu;
    {
        const bool branch_taken_0x32515c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32515c) {
            ctx->pc = 0x32510Cu;
            return;
        }
    }
    ctx->pc = 0x325164u;
    // 0x325164: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x325164u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x325168: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x325168u;
    {
        const bool branch_taken_0x325168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325168) {
            ctx->pc = 0x3251C0u;
            return;
        }
    }
    ctx->pc = 0x325170u;
}
