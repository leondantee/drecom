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

// Function: entry_0027d270
// Address: 0x27d270 - 0x27d28c
void entry_0027d270_0x27d270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027d270_0x27d270");
#endif

    ctx->pc = 0x27d270u;

    // 0x27d270: 0x2e42003c  sltiu       $v0, $s2, 0x3C
    ctx->pc = 0x27d270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x27d274: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x27D274u;
    {
        const bool branch_taken_0x27d274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d274) {
            ctx->pc = 0x27D250u;
            return;
        }
    }
    ctx->pc = 0x27D27Cu;
    // 0x27d27c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27d27cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d280: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x27d280u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d284: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x27D284u;
    {
        const bool branch_taken_0x27d284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d284) {
            ctx->pc = 0x27D378u;
            return;
        }
    }
    ctx->pc = 0x27D28Cu;
}
