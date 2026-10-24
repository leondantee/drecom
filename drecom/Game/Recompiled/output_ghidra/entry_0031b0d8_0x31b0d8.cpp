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

// Function: entry_0031b0d8
// Address: 0x31b0d8 - 0x31b0e4
void entry_0031b0d8_0x31b0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031b0d8_0x31b0d8");
#endif

    ctx->pc = 0x31b0d8u;

    // 0x31b0d8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x31b0d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b0dc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x31B0DCu;
    {
        const bool branch_taken_0x31b0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b0dc) {
            ctx->pc = 0x31B168u;
            return;
        }
    }
    ctx->pc = 0x31B0E4u;
}
