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

// Function: entry_0036d2c8
// Address: 0x36d2c8 - 0x36d2d8
void entry_0036d2c8_0x36d2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036d2c8_0x36d2c8");
#endif

    ctx->pc = 0x36d2c8u;

    // 0x36d2c8: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x36d2c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x36d2cc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x36D2CCu;
    {
        const bool branch_taken_0x36d2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36d2cc) {
            ctx->pc = 0x36D288u;
            return;
        }
    }
    ctx->pc = 0x36D2D4u;
    // 0x36d2d4: 0x0  nop
    ctx->pc = 0x36d2d4u;
    // NOP
    ctx->pc = 0x36d2d8u;
}
