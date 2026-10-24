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

// Function: entry_00162164
// Address: 0x162164 - 0x162170
void entry_00162164_0x162164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162164_0x162164");
#endif

    ctx->pc = 0x162164u;

    // 0x162164: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162168: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x162168u;
    {
        const bool branch_taken_0x162168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162168) {
            ctx->pc = 0x1625A8u;
            return;
        }
    }
    ctx->pc = 0x162170u;
}
