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

// Function: entry_001ac998
// Address: 0x1ac998 - 0x1ac9b0
void entry_001ac998_0x1ac998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac998_0x1ac998");
#endif

    ctx->pc = 0x1ac998u;

    // 0x1ac998: 0x26321d08  addiu       $s2, $s1, 0x1D08
    ctx->pc = 0x1ac998u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 7432));
    // 0x1ac99c: 0x26527ff8  addiu       $s2, $s2, 0x7FF8
    ctx->pc = 0x1ac99cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32760));
    // 0x1ac9a0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1ac9a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ac9a4: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1ac9a4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ac9a8: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x1AC9A8u;
    {
        const bool branch_taken_0x1ac9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac9a8) {
            ctx->pc = 0x1ACC70u;
            return;
        }
    }
    ctx->pc = 0x1AC9B0u;
}
