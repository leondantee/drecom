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

// Function: entry_0029c4fc
// Address: 0x29c4fc - 0x29c508
void entry_0029c4fc_0x29c4fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029c4fc_0x29c4fc");
#endif

    ctx->pc = 0x29c4fcu;

    // 0x29c4fc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x29c4fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c500: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x29C500u;
    {
        const bool branch_taken_0x29c500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c500) {
            ctx->pc = 0x29C608u;
            return;
        }
    }
    ctx->pc = 0x29C508u;
}
