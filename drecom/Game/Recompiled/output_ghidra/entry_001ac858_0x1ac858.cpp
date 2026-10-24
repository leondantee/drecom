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

// Function: entry_001ac858
// Address: 0x1ac858 - 0x1ac864
void entry_001ac858_0x1ac858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac858_0x1ac858");
#endif

    ctx->pc = 0x1ac858u;

    // 0x1ac858: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1ac858u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac85c: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x1AC85Cu;
    {
        const bool branch_taken_0x1ac85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac85c) {
            ctx->pc = 0x1ACC80u;
            return;
        }
    }
    ctx->pc = 0x1AC864u;
}
