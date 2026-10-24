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

// Function: entry_001aec6c
// Address: 0x1aec6c - 0x1aec80
void entry_001aec6c_0x1aec6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aec6c_0x1aec6c");
#endif

    ctx->pc = 0x1aec6cu;

    // 0x1aec6c: 0x26511d08  addiu       $s1, $s2, 0x1D08
    ctx->pc = 0x1aec6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 7432));
    // 0x1aec70: 0x26317ff8  addiu       $s1, $s1, 0x7FF8
    ctx->pc = 0x1aec70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32760));
    // 0x1aec74: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1aec74u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1aec78: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1AEC78u;
    {
        const bool branch_taken_0x1aec78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aec78) {
            ctx->pc = 0x1AED38u;
            return;
        }
    }
    ctx->pc = 0x1AEC80u;
}
