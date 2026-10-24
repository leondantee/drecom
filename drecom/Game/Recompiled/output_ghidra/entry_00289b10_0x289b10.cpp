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

// Function: entry_00289b10
// Address: 0x289b10 - 0x289b24
void entry_00289b10_0x289b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00289b10_0x289b10");
#endif

    ctx->pc = 0x289b10u;

    // 0x289b10: 0x2ac30004  slti        $v1, $s6, 0x4
    ctx->pc = 0x289b10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x289b14: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x289B14u;
    {
        const bool branch_taken_0x289b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x289b14) {
            ctx->pc = 0x289AACu;
            return;
        }
    }
    ctx->pc = 0x289B1Cu;
    // 0x289b1c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x289B1Cu;
    {
        const bool branch_taken_0x289b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289b1c) {
            ctx->pc = 0x289BA0u;
            return;
        }
    }
    ctx->pc = 0x289B24u;
}
