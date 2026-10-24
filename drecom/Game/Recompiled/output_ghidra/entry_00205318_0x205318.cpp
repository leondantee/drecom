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

// Function: entry_00205318
// Address: 0x205318 - 0x205330
void entry_00205318_0x205318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205318_0x205318");
#endif

    ctx->pc = 0x205318u;

    // 0x205318: 0x2e020009  sltiu       $v0, $s0, 0x9
    ctx->pc = 0x205318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x20531c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x20531Cu;
    {
        const bool branch_taken_0x20531c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20531c) {
            ctx->pc = 0x2052E8u;
            return;
        }
    }
    ctx->pc = 0x205324u;
    // 0x205324: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x205324u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x205328: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x205328u;
    {
        const bool branch_taken_0x205328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205328) {
            ctx->pc = 0x205350u;
            return;
        }
    }
    ctx->pc = 0x205330u;
}
