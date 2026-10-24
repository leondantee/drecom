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

// Function: entry_00289b90
// Address: 0x289b90 - 0x289ba0
void entry_00289b90_0x289b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00289b90_0x289b90");
#endif

    ctx->pc = 0x289b90u;

    // 0x289b90: 0x2ac70004  slti        $a3, $s6, 0x4
    ctx->pc = 0x289b90u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x289b94: 0x14e0ffe6  bnez        $a3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x289B94u;
    {
        const bool branch_taken_0x289b94 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x289b94) {
            ctx->pc = 0x289B30u;
            return;
        }
    }
    ctx->pc = 0x289B9Cu;
    // 0x289b9c: 0x0  nop
    ctx->pc = 0x289b9cu;
    // NOP
    ctx->pc = 0x289ba0u;
}
