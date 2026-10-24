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

// Function: entry_00273a78
// Address: 0x273a78 - 0x273a8c
void entry_00273a78_0x273a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273a78_0x273a78");
#endif

    ctx->pc = 0x273a78u;

    // 0x273a78: 0x2a440006  slti        $a0, $s2, 0x6
    ctx->pc = 0x273a78u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x273a7c: 0x1480ffd0  bnez        $a0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x273A7Cu;
    {
        const bool branch_taken_0x273a7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x273a7c) {
            ctx->pc = 0x2739C0u;
            return;
        }
    }
    ctx->pc = 0x273A84u;
    // 0x273a84: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x273A84u;
    {
        const bool branch_taken_0x273a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273a84) {
            ctx->pc = 0x273B30u;
            return;
        }
    }
    ctx->pc = 0x273A8Cu;
}
