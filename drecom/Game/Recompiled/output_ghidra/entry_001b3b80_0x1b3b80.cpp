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

// Function: entry_001b3b80
// Address: 0x1b3b80 - 0x1b3ba4
void entry_001b3b80_0x1b3b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3b80_0x1b3b80");
#endif

    ctx->pc = 0x1b3b80u;

    // 0x1b3b80: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x1b3b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x1b3b84: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x1b3b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b3b88: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1B3B88u;
    {
        const bool branch_taken_0x1b3b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3b88) {
            ctx->pc = 0x1B3AC4u;
            return;
        }
    }
    ctx->pc = 0x1B3B90u;
    // 0x1b3b90: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3B90u;
    {
        const bool branch_taken_0x1b3b90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3b90) {
            ctx->pc = 0x1B3BA4u;
            return;
        }
    }
    ctx->pc = 0x1B3B98u;
    // 0x1b3b98: 0x72a01628  paddub      $v0, $s5, $zero
    ctx->pc = 0x1b3b98u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1b3b9c: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x1B3B9Cu;
    {
        const bool branch_taken_0x1b3b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3b9c) {
            ctx->pc = 0x1B4074u;
            return;
        }
    }
    ctx->pc = 0x1B3BA4u;
}
