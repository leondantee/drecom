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

// Function: entry_0036be20
// Address: 0x36be20 - 0x36be30
void entry_0036be20_0x36be20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036be20_0x36be20");
#endif

    ctx->pc = 0x36be20u;

    // 0x36be20: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x36be20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x36be24: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x36BE24u;
    {
        const bool branch_taken_0x36be24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36be24) {
            ctx->pc = 0x36BD44u;
            return;
        }
    }
    ctx->pc = 0x36BE2Cu;
    // 0x36be2c: 0x0  nop
    ctx->pc = 0x36be2cu;
    // NOP
    ctx->pc = 0x36be30u;
}
