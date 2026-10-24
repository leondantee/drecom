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

// Function: entry_001e6b00
// Address: 0x1e6b00 - 0x1e6b18
void entry_001e6b00_0x1e6b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6b00_0x1e6b00");
#endif

    ctx->pc = 0x1e6b00u;

    // 0x1e6b00: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x1e6b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1e6b04: 0xa0600220  sb          $zero, 0x220($v1)
    ctx->pc = 0x1e6b04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 544), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e6b08: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x1e6b08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e6b0c: 0x72008e28  paddub      $s1, $s0, $zero
    ctx->pc = 0x1e6b0cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e6b10: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1E6B10u;
    {
        const bool branch_taken_0x1e6b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6b10) {
            ctx->pc = 0x1E6B78u;
            return;
        }
    }
    ctx->pc = 0x1E6B18u;
}
