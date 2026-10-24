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

// Function: entry_00322f60
// Address: 0x322f60 - 0x322f6c
void entry_00322f60_0x322f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00322f60_0x322f60");
#endif

    ctx->pc = 0x322f60u;

    // 0x322f60: 0x2a430004  slti        $v1, $s2, 0x4
    ctx->pc = 0x322f60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x322f64: 0x1460ffb5  bnez        $v1, . + 4 + (-0x4B << 2)
    ctx->pc = 0x322F64u;
    {
        const bool branch_taken_0x322f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x322f64) {
            ctx->pc = 0x322E3Cu;
            return;
        }
    }
    ctx->pc = 0x322F6Cu;
}
