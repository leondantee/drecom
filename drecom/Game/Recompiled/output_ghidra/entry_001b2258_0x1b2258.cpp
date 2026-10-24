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

// Function: entry_001b2258
// Address: 0x1b2258 - 0x1b2270
void entry_001b2258_0x1b2258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2258_0x1b2258");
#endif

    ctx->pc = 0x1b2258u;

    // 0x1b2258: 0x25e102a  slt         $v0, $s2, $fp
    ctx->pc = 0x1b2258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x1b225c: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1B225Cu;
    {
        const bool branch_taken_0x1b225c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b225c) {
            ctx->pc = 0x1B21C4u;
            return;
        }
    }
    ctx->pc = 0x1B2264u;
    // 0x1b2264: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x1b2264u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1b2268: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b2268u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b226c: 0x0  nop
    ctx->pc = 0x1b226cu;
    // NOP
    ctx->pc = 0x1b2270u;
}
