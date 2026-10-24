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

// Function: entry_0033a808
// Address: 0x33a808 - 0x33a820
void entry_0033a808_0x33a808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a808_0x33a808");
#endif

    ctx->pc = 0x33a808u;

    // 0x33a808: 0x1a200005  blez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x33A808u;
    {
        const bool branch_taken_0x33a808 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x33a808) {
            ctx->pc = 0x33A820u;
            return;
        }
    }
    ctx->pc = 0x33A810u;
    // 0x33a810: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33a810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33a814: 0x1c40ffea  bgtz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x33A814u;
    {
        const bool branch_taken_0x33a814 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x33a814) {
            ctx->pc = 0x33A7C0u;
            return;
        }
    }
    ctx->pc = 0x33A81Cu;
    // 0x33a81c: 0x0  nop
    ctx->pc = 0x33a81cu;
    // NOP
    ctx->pc = 0x33a820u;
}
