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

// Function: entry_001e5c90
// Address: 0x1e5c90 - 0x1e5ca8
void entry_001e5c90_0x1e5c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5c90_0x1e5c90");
#endif

    ctx->pc = 0x1e5c90u;

    // 0x1e5c90: 0x27d2021  addu        $a0, $s3, $sp
    ctx->pc = 0x1e5c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1e5c94: 0xa08001b0  sb          $zero, 0x1B0($a0)
    ctx->pc = 0x1e5c94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 432), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e5c98: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1e5c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e5c9c: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1e5c9cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e5ca0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1E5CA0u;
    {
        const bool branch_taken_0x1e5ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5ca0) {
            ctx->pc = 0x1E5D18u;
            return;
        }
    }
    ctx->pc = 0x1E5CA8u;
}
