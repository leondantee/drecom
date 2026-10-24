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

// Function: entry_001930e8
// Address: 0x1930e8 - 0x1930f4
void entry_001930e8_0x1930e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001930e8_0x1930e8");
#endif

    ctx->pc = 0x1930e8u;

    // 0x1930e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1930e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1930ec: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1930ECu;
    {
        const bool branch_taken_0x1930ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1930ec) {
            ctx->pc = 0x1931B4u;
            return;
        }
    }
    ctx->pc = 0x1930F4u;
}
