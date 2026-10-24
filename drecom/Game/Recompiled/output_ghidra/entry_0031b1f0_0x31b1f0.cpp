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

// Function: entry_0031b1f0
// Address: 0x31b1f0 - 0x31b200
void entry_0031b1f0_0x31b1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031b1f0_0x31b1f0");
#endif

    ctx->pc = 0x31b1f0u;

    // 0x31b1f0: 0x2e230003  sltiu       $v1, $s1, 0x3
    ctx->pc = 0x31b1f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x31b1f4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x31B1F4u;
    {
        const bool branch_taken_0x31b1f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b1f4) {
            ctx->pc = 0x31B1B0u;
            return;
        }
    }
    ctx->pc = 0x31B1FCu;
    // 0x31b1fc: 0x0  nop
    ctx->pc = 0x31b1fcu;
    // NOP
    ctx->pc = 0x31b200u;
}
