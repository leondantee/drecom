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

// Function: entry_001e69f8
// Address: 0x1e69f8 - 0x1e6a10
void entry_001e69f8_0x1e69f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e69f8_0x1e69f8");
#endif

    ctx->pc = 0x1e69f8u;

    // 0x1e69f8: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x1e69f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1e69fc: 0xa0600220  sb          $zero, 0x220($v1)
    ctx->pc = 0x1e69fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 544), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e6a00: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1e6a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e6a04: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x1e6a04u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e6a08: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1E6A08u;
    {
        const bool branch_taken_0x1e6a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6a08) {
            ctx->pc = 0x1E6B78u;
            return;
        }
    }
    ctx->pc = 0x1E6A10u;
}
