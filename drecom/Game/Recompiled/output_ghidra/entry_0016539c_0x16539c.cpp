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

// Function: entry_0016539c
// Address: 0x16539c - 0x1653b0
void entry_0016539c_0x16539c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016539c_0x16539c");
#endif

    ctx->pc = 0x16539cu;

    // 0x16539c: 0x2673fa00  addiu       $s3, $s3, -0x600
    ctx->pc = 0x16539cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965760));
    // 0x1653a0: 0x72608628  paddub      $s0, $s3, $zero
    ctx->pc = 0x1653a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1653a4: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1653a4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1653a8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1653A8u;
    {
        const bool branch_taken_0x1653a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1653a8) {
            ctx->pc = 0x1653F0u;
            return;
        }
    }
    ctx->pc = 0x1653B0u;
}
