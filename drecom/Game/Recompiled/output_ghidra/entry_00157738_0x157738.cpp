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

// Function: entry_00157738
// Address: 0x157738 - 0x157744
void entry_00157738_0x157738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157738_0x157738");
#endif

    ctx->pc = 0x157738u;

    // 0x157738: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x157738u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15773c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x15773Cu;
    {
        const bool branch_taken_0x15773c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15773c) {
            ctx->pc = 0x1578F0u;
            return;
        }
    }
    ctx->pc = 0x157744u;
}
