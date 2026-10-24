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

// Function: entry_00219d2c
// Address: 0x219d2c - 0x219d40
void entry_00219d2c_0x219d2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00219d2c_0x219d2c");
#endif

    ctx->pc = 0x219d2cu;

    // 0x219d2c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x219d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x219d30: 0x2477a610  addiu       $s7, $v1, -0x59F0
    ctx->pc = 0x219d30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x219d34: 0x8ef00000  lw          $s0, 0x0($s7)
    ctx->pc = 0x219d34u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x219d38: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x219D38u;
    {
        const bool branch_taken_0x219d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219d38) {
            ctx->pc = 0x219E70u;
            return;
        }
    }
    ctx->pc = 0x219D40u;
}
