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

// Function: entry_00194f50
// Address: 0x194f50 - 0x194f64
void entry_00194f50_0x194f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194f50_0x194f50");
#endif

    ctx->pc = 0x194f50u;

    // 0x194f50: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x194f50u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x194f54: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x194f54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x194f58: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x194f58u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x194f5c: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x194F5Cu;
    {
        const bool branch_taken_0x194f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194f5c) {
            ctx->pc = 0x195200u;
            return;
        }
    }
    ctx->pc = 0x194F64u;
}
