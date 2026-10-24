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

// Function: entry_00123518
// Address: 0x123518 - 0x123528
void entry_00123518_0x123518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123518_0x123518");
#endif

    ctx->pc = 0x123518u;

    // 0x123518: 0x214182a  slt         $v1, $s0, $s4
    ctx->pc = 0x123518u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x12351c: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x12351Cu;
    {
        const bool branch_taken_0x12351c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12351c) {
            ctx->pc = 0x1234D4u;
            return;
        }
    }
    ctx->pc = 0x123524u;
    // 0x123524: 0x0  nop
    ctx->pc = 0x123524u;
    // NOP
    ctx->pc = 0x123528u;
}
