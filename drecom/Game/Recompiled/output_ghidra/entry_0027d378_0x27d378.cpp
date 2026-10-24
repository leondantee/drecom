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

// Function: entry_0027d378
// Address: 0x27d378 - 0x27d394
void entry_0027d378_0x27d378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027d378_0x27d378");
#endif

    ctx->pc = 0x27d378u;

    // 0x27d378: 0x2e4200a0  sltiu       $v0, $s2, 0xA0
    ctx->pc = 0x27d378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)160) ? 1 : 0);
    // 0x27d37c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x27D37Cu;
    {
        const bool branch_taken_0x27d37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d37c) {
            ctx->pc = 0x27D358u;
            return;
        }
    }
    ctx->pc = 0x27D384u;
    // 0x27d384: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27d384u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d388: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x27d388u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d38c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x27D38Cu;
    {
        const bool branch_taken_0x27d38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d38c) {
            ctx->pc = 0x27D480u;
            return;
        }
    }
    ctx->pc = 0x27D394u;
}
