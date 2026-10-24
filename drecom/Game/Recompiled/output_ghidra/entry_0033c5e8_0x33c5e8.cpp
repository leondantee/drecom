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

// Function: entry_0033c5e8
// Address: 0x33c5e8 - 0x33c5f4
void entry_0033c5e8_0x33c5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033c5e8_0x33c5e8");
#endif

    ctx->pc = 0x33c5e8u;

    // 0x33c5e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c5ec: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x33C5ECu;
    {
        const bool branch_taken_0x33c5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c5ec) {
            ctx->pc = 0x33C64Cu;
            return;
        }
    }
    ctx->pc = 0x33C5F4u;
}
