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

// Function: entry_00277360
// Address: 0x277360 - 0x277378
void entry_00277360_0x277360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00277360_0x277360");
#endif

    ctx->pc = 0x277360u;

    // 0x277360: 0x2a210050  slti        $at, $s1, 0x50
    ctx->pc = 0x277360u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x277364: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x277364u;
    {
        const bool branch_taken_0x277364 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x277364) {
            ctx->pc = 0x277378u;
            return;
        }
    }
    ctx->pc = 0x27736Cu;
    // 0x27736c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27736cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277370: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x277370u;
    {
        const bool branch_taken_0x277370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277370) {
            ctx->pc = 0x277394u;
            return;
        }
    }
    ctx->pc = 0x277378u;
}
