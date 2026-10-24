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

// Function: entry_00187ca0
// Address: 0x187ca0 - 0x187cb4
void entry_00187ca0_0x187ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187ca0_0x187ca0");
#endif

    ctx->pc = 0x187ca0u;

    // 0x187ca0: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x187ca0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x187ca4: 0x2452ffff  addiu       $s2, $v0, -0x1
    ctx->pc = 0x187ca4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x187ca8: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x187CA8u;
    {
        const bool branch_taken_0x187ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187ca8) {
            ctx->pc = 0x187BB4u;
            return;
        }
    }
    ctx->pc = 0x187CB0u;
    // 0x187cb0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x187cb0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x187cb4u;
}
