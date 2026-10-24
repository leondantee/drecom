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

// Function: entry_00279830
// Address: 0x279830 - 0x279848
void entry_00279830_0x279830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00279830_0x279830");
#endif

    ctx->pc = 0x279830u;

    // 0x279830: 0x2e020017  sltiu       $v0, $s0, 0x17
    ctx->pc = 0x279830u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x279834: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x279834u;
    {
        const bool branch_taken_0x279834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x279834) {
            ctx->pc = 0x2796E8u;
            return;
        }
    }
    ctx->pc = 0x27983Cu;
    // 0x27983c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27983cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279840: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x279840u;
    {
        const bool branch_taken_0x279840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279840) {
            ctx->pc = 0x279990u;
            return;
        }
    }
    ctx->pc = 0x279848u;
}
