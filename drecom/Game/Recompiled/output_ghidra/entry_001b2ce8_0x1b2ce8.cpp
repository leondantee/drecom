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

// Function: entry_001b2ce8
// Address: 0x1b2ce8 - 0x1b2cf8
void entry_001b2ce8_0x1b2ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2ce8_0x1b2ce8");
#endif

    ctx->pc = 0x1b2ce8u;

    // 0x1b2ce8: 0x297102a  slt         $v0, $s4, $s7
    ctx->pc = 0x1b2ce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1b2cec: 0x1440ff5c  bnez        $v0, . + 4 + (-0xA4 << 2)
    ctx->pc = 0x1B2CECu;
    {
        const bool branch_taken_0x1b2cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2cec) {
            ctx->pc = 0x1B2A60u;
            return;
        }
    }
    ctx->pc = 0x1B2CF4u;
    // 0x1b2cf4: 0x72e01628  paddub      $v0, $s7, $zero
    ctx->pc = 0x1b2cf4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1b2cf8u;
}
