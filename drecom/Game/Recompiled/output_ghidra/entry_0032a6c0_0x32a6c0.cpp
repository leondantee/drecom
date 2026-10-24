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

// Function: entry_0032a6c0
// Address: 0x32a6c0 - 0x32a6d0
void entry_0032a6c0_0x32a6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032a6c0_0x32a6c0");
#endif

    ctx->pc = 0x32a6c0u;

    // 0x32a6c0: 0x234182a  slt         $v1, $s1, $s4
    ctx->pc = 0x32a6c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x32a6c4: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x32A6C4u;
    {
        const bool branch_taken_0x32a6c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a6c4) {
            ctx->pc = 0x32A640u;
            return;
        }
    }
    ctx->pc = 0x32A6CCu;
    // 0x32a6cc: 0x0  nop
    ctx->pc = 0x32a6ccu;
    // NOP
    ctx->pc = 0x32a6d0u;
}
