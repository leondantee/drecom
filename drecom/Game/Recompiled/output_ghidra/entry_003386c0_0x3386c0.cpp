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

// Function: entry_003386c0
// Address: 0x3386c0 - 0x3386cc
void entry_003386c0_0x3386c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003386c0_0x3386c0");
#endif

    ctx->pc = 0x3386c0u;

    // 0x3386c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3386c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3386c4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3386C4u;
    {
        const bool branch_taken_0x3386c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3386c4) {
            ctx->pc = 0x338714u;
            return;
        }
    }
    ctx->pc = 0x3386CCu;
}
