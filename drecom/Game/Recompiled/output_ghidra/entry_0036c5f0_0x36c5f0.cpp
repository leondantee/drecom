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

// Function: entry_0036c5f0
// Address: 0x36c5f0 - 0x36c600
void entry_0036c5f0_0x36c5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036c5f0_0x36c5f0");
#endif

    ctx->pc = 0x36c5f0u;

    // 0x36c5f0: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x36c5f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x36c5f4: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x36C5F4u;
    {
        const bool branch_taken_0x36c5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36c5f4) {
            ctx->pc = 0x36C46Cu;
            return;
        }
    }
    ctx->pc = 0x36C5FCu;
    // 0x36c5fc: 0x0  nop
    ctx->pc = 0x36c5fcu;
    // NOP
    ctx->pc = 0x36c600u;
}
