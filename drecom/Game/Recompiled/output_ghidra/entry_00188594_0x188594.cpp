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

// Function: entry_00188594
// Address: 0x188594 - 0x1885a0
void entry_00188594_0x188594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188594_0x188594");
#endif

    ctx->pc = 0x188594u;

    // 0x188594: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188598: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x188598u;
    {
        const bool branch_taken_0x188598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188598) {
            ctx->pc = 0x1885A4u;
            return;
        }
    }
    ctx->pc = 0x1885A0u;
}
