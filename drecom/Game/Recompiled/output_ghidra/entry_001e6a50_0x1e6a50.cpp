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

// Function: entry_001e6a50
// Address: 0x1e6a50 - 0x1e6a68
void entry_001e6a50_0x1e6a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6a50_0x1e6a50");
#endif

    ctx->pc = 0x1e6a50u;

    // 0x1e6a50: 0x27d2821  addu        $a1, $s3, $sp
    ctx->pc = 0x1e6a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1e6a54: 0xa0a00220  sb          $zero, 0x220($a1)
    ctx->pc = 0x1e6a54u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 544), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e6a58: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1e6a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e6a5c: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1e6a5cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e6a60: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1E6A60u;
    {
        const bool branch_taken_0x1e6a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6a60) {
            ctx->pc = 0x1E6B78u;
            return;
        }
    }
    ctx->pc = 0x1E6A68u;
}
