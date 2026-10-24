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

// Function: entry_00320dc0
// Address: 0x320dc0 - 0x320dcc
void entry_00320dc0_0x320dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320dc0_0x320dc0");
#endif

    ctx->pc = 0x320dc0u;

    // 0x320dc0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x320dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320dc4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x320DC4u;
    {
        const bool branch_taken_0x320dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320dc4) {
            ctx->pc = 0x320E88u;
            return;
        }
    }
    ctx->pc = 0x320DCCu;
}
