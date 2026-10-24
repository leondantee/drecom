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

// Function: entry_002dcdb8
// Address: 0x2dcdb8 - 0x2dcdc8
void entry_002dcdb8_0x2dcdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dcdb8_0x2dcdb8");
#endif

    ctx->pc = 0x2dcdb8u;

    // 0x2dcdb8: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x2dcdb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2dcdbc: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2DCDBCu;
    {
        const bool branch_taken_0x2dcdbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dcdbc) {
            ctx->pc = 0x2DCD64u;
            return;
        }
    }
    ctx->pc = 0x2DCDC4u;
    // 0x2dcdc4: 0x0  nop
    ctx->pc = 0x2dcdc4u;
    // NOP
    ctx->pc = 0x2dcdc8u;
}
