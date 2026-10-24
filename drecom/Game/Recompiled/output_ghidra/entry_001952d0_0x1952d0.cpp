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

// Function: entry_001952d0
// Address: 0x1952d0 - 0x1952dc
void entry_001952d0_0x1952d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001952d0_0x1952d0");
#endif

    ctx->pc = 0x1952d0u;

    // 0x1952d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1952d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1952d4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1952D4u;
    {
        const bool branch_taken_0x1952d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1952d4) {
            ctx->pc = 0x1953ACu;
            return;
        }
    }
    ctx->pc = 0x1952DCu;
}
