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

// Function: entry_0027389c
// Address: 0x27389c - 0x2738b4
void entry_0027389c_0x27389c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027389c_0x27389c");
#endif

    ctx->pc = 0x27389cu;

    // 0x27389c: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x27389cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2738a0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2738A0u;
    {
        const bool branch_taken_0x2738a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2738a0) {
            ctx->pc = 0x2738B4u;
            return;
        }
    }
    ctx->pc = 0x2738A8u;
    // 0x2738a8: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x2738a8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2738ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2738ACu;
    {
        const bool branch_taken_0x2738ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2738ac) {
            ctx->pc = 0x2738B8u;
            return;
        }
    }
    ctx->pc = 0x2738B4u;
}
