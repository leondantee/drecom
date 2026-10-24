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

// Function: entry_00195c98
// Address: 0x195c98 - 0x195cb0
void entry_00195c98_0x195c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195c98_0x195c98");
#endif

    ctx->pc = 0x195c98u;

    // 0x195c98: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x195c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x195c9c: 0x8c22ac60  lw          $v0, -0x53A0($at)
    ctx->pc = 0x195c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAC60u));
    // 0x195ca0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x195ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x195ca4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x195ca4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x195ca8: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x195CA8u;
    {
        const bool branch_taken_0x195ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195ca8) {
            ctx->pc = 0x195C54u;
            return;
        }
    }
    ctx->pc = 0x195CB0u;
}
