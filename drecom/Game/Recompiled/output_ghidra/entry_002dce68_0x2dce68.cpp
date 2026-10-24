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

// Function: entry_002dce68
// Address: 0x2dce68 - 0x2dce78
void entry_002dce68_0x2dce68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dce68_0x2dce68");
#endif

    ctx->pc = 0x2dce68u;

    // 0x2dce68: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x2dce68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2dce6c: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2DCE6Cu;
    {
        const bool branch_taken_0x2dce6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dce6c) {
            ctx->pc = 0x2DCE14u;
            return;
        }
    }
    ctx->pc = 0x2DCE74u;
    // 0x2dce74: 0x0  nop
    ctx->pc = 0x2dce74u;
    // NOP
    ctx->pc = 0x2dce78u;
}
