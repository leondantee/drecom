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

// Function: entry_0027f218
// Address: 0x27f218 - 0x27f230
void entry_0027f218_0x27f218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027f218_0x27f218");
#endif

    ctx->pc = 0x27f218u;

    // 0x27f218: 0x2e020012  sltiu       $v0, $s0, 0x12
    ctx->pc = 0x27f218u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x27f21c: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x27F21Cu;
    {
        const bool branch_taken_0x27f21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f21c) {
            ctx->pc = 0x27F1ACu;
            return;
        }
    }
    ctx->pc = 0x27F224u;
    // 0x27f224: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27f224u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f228: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x27F228u;
    {
        const bool branch_taken_0x27f228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f228) {
            ctx->pc = 0x27F300u;
            return;
        }
    }
    ctx->pc = 0x27F230u;
}
