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

// Function: entry_001e9de0
// Address: 0x1e9de0 - 0x1e9df0
void entry_001e9de0_0x1e9de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9de0_0x1e9de0");
#endif

    ctx->pc = 0x1e9de0u;

    // 0x1e9de0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e9de0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e9de4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e9de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e9de8: 0x12620005  beq         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E9DE8u;
    {
        const bool branch_taken_0x1e9de8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e9de8) {
            ctx->pc = 0x1E9E00u;
            return;
        }
    }
    ctx->pc = 0x1E9DF0u;
}
