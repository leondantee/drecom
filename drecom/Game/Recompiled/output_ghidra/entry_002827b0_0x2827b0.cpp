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

// Function: entry_002827b0
// Address: 0x2827b0 - 0x2827c8
void entry_002827b0_0x2827b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002827b0_0x2827b0");
#endif

    ctx->pc = 0x2827b0u;

    // 0x2827b0: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x2827b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2827b4: 0x1460ffac  bnez        $v1, . + 4 + (-0x54 << 2)
    ctx->pc = 0x2827B4u;
    {
        const bool branch_taken_0x2827b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2827b4) {
            ctx->pc = 0x282668u;
            return;
        }
    }
    ctx->pc = 0x2827BCu;
    // 0x2827bc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2827bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2827c0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2827C0u;
    {
        const bool branch_taken_0x2827c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2827c0) {
            ctx->pc = 0x282910u;
            return;
        }
    }
    ctx->pc = 0x2827C8u;
}
