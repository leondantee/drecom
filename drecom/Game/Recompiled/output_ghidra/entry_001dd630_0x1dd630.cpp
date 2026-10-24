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

// Function: entry_001dd630
// Address: 0x1dd630 - 0x1dd650
void entry_001dd630_0x1dd630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd630_0x1dd630");
#endif

    ctx->pc = 0x1dd630u;

    // 0x1dd630: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1dd630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1dd634: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1dd634u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd638: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD638u;
    {
        const bool branch_taken_0x1dd638 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1dd638) {
            ctx->pc = 0x1DD650u;
            return;
        }
    }
    ctx->pc = 0x1DD640u;
    // 0x1dd640: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1dd640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1dd644: 0xafa30174  sw          $v1, 0x174($sp)
    ctx->pc = 0x1dd644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 3));
    // 0x1dd648: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD648u;
    {
        const bool branch_taken_0x1dd648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd648) {
            ctx->pc = 0x1DD658u;
            return;
        }
    }
    ctx->pc = 0x1DD650u;
}
