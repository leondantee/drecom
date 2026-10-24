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

// Function: entry_00174b88
// Address: 0x174b88 - 0x174b9c
void entry_00174b88_0x174b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174b88_0x174b88");
#endif

    ctx->pc = 0x174b88u;

    // 0x174b88: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x174B88u;
    {
        const bool branch_taken_0x174b88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x174b88) {
            ctx->pc = 0x174B9Cu;
            return;
        }
    }
    ctx->pc = 0x174B90u;
    // 0x174b90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174b94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x174B94u;
    {
        const bool branch_taken_0x174b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174b94) {
            ctx->pc = 0x174BA0u;
            return;
        }
    }
    ctx->pc = 0x174B9Cu;
}
