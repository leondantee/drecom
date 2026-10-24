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

// Function: entry_001964a0
// Address: 0x1964a0 - 0x1964b8
void entry_001964a0_0x1964a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001964a0_0x1964a0");
#endif

    ctx->pc = 0x1964a0u;

    // 0x1964a0: 0x12800066  beqz        $s4, . + 4 + (0x66 << 2)
    ctx->pc = 0x1964A0u;
    {
        const bool branch_taken_0x1964a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1964a0) {
            ctx->pc = 0x19663Cu;
            return;
        }
    }
    ctx->pc = 0x1964A8u;
    // 0x1964a8: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x1964a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1964ac: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1964acu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1964b0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1964B0u;
    {
        const bool branch_taken_0x1964b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1964b0) {
            ctx->pc = 0x196528u;
            return;
        }
    }
    ctx->pc = 0x1964B8u;
}
