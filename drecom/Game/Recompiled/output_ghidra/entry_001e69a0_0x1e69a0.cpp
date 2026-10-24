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

// Function: entry_001e69a0
// Address: 0x1e69a0 - 0x1e69b8
void entry_001e69a0_0x1e69a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e69a0_0x1e69a0");
#endif

    ctx->pc = 0x1e69a0u;

    // 0x1e69a0: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x1e69a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1e69a4: 0xa0600220  sb          $zero, 0x220($v1)
    ctx->pc = 0x1e69a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 544), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e69a8: 0x26340010  addiu       $s4, $s1, 0x10
    ctx->pc = 0x1e69a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e69ac: 0x72808e28  paddub      $s1, $s4, $zero
    ctx->pc = 0x1e69acu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1e69b0: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x1E69B0u;
    {
        const bool branch_taken_0x1e69b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e69b0) {
            ctx->pc = 0x1E6B78u;
            return;
        }
    }
    ctx->pc = 0x1E69B8u;
}
