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

// Function: entry_001a0358
// Address: 0x1a0358 - 0x1a0364
void entry_001a0358_0x1a0358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0358_0x1a0358");
#endif

    ctx->pc = 0x1a0358u;

    // 0x1a0358: 0x2bc30003  slti        $v1, $fp, 0x3
    ctx->pc = 0x1a0358u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a035c: 0x1460ff1d  bnez        $v1, . + 4 + (-0xE3 << 2)
    ctx->pc = 0x1A035Cu;
    {
        const bool branch_taken_0x1a035c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a035c) {
            ctx->pc = 0x19FFD4u;
            return;
        }
    }
    ctx->pc = 0x1A0364u;
}
