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

// Function: entry_001e7888
// Address: 0x1e7888 - 0x1e78a0
void entry_001e7888_0x1e7888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7888_0x1e7888");
#endif

    ctx->pc = 0x1e7888u;

    // 0x1e7888: 0x25d8021  addu        $s0, $s2, $sp
    ctx->pc = 0x1e7888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1e788c: 0xa2000220  sb          $zero, 0x220($s0)
    ctx->pc = 0x1e788cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 544), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e7890: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x1e7890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e7894: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x1e7894u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e7898: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x1E7898u;
    {
        const bool branch_taken_0x1e7898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7898) {
            ctx->pc = 0x1E7AB8u;
            return;
        }
    }
    ctx->pc = 0x1E78A0u;
}
