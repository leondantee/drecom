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

// Function: entry_0027d188
// Address: 0x27d188 - 0x27d1a4
void entry_0027d188_0x27d188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027d188_0x27d188");
#endif

    ctx->pc = 0x27d188u;

    // 0x27d188: 0x2e420064  sltiu       $v0, $s2, 0x64
    ctx->pc = 0x27d188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x27d18c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x27D18Cu;
    {
        const bool branch_taken_0x27d18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d18c) {
            ctx->pc = 0x27D168u;
            return;
        }
    }
    ctx->pc = 0x27D194u;
    // 0x27d194: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27d194u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d198: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x27d198u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d19c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x27D19Cu;
    {
        const bool branch_taken_0x27d19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d19c) {
            ctx->pc = 0x27D270u;
            return;
        }
    }
    ctx->pc = 0x27D1A4u;
}
