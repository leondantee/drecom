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

// Function: entry_0036cd38
// Address: 0x36cd38 - 0x36cd48
void entry_0036cd38_0x36cd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036cd38_0x36cd38");
#endif

    ctx->pc = 0x36cd38u;

    // 0x36cd38: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x36cd38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x36cd3c: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x36CD3Cu;
    {
        const bool branch_taken_0x36cd3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36cd3c) {
            ctx->pc = 0x36CC50u;
            return;
        }
    }
    ctx->pc = 0x36CD44u;
    // 0x36cd44: 0x0  nop
    ctx->pc = 0x36cd44u;
    // NOP
    ctx->pc = 0x36cd48u;
}
