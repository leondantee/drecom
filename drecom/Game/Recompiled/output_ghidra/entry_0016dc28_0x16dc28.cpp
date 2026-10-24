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

// Function: entry_0016dc28
// Address: 0x16dc28 - 0x16dc3c
void entry_0016dc28_0x16dc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dc28_0x16dc28");
#endif

    ctx->pc = 0x16dc28u;

    // 0x16dc28: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x16dc28u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16dc2c: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x16dc2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16dc30: 0x7200f628  paddub      $fp, $s0, $zero
    ctx->pc = 0x16dc30u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16dc34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16DC34u;
    {
        const bool branch_taken_0x16dc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dc34) {
            ctx->pc = 0x16DC58u;
            return;
        }
    }
    ctx->pc = 0x16DC3Cu;
}
