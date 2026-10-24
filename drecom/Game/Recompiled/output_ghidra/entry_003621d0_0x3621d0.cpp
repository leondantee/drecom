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

// Function: entry_003621d0
// Address: 0x3621d0 - 0x3621e8
void entry_003621d0_0x3621d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003621d0_0x3621d0");
#endif

    ctx->pc = 0x3621d0u;

    // 0x3621d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3621d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3621d4: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x3621d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3621d8: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x3621D8u;
    {
        const bool branch_taken_0x3621d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3621d8) {
            ctx->pc = 0x362168u;
            return;
        }
    }
    ctx->pc = 0x3621E0u;
    // 0x3621e0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3621E0u;
    {
        const bool branch_taken_0x3621e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3621e0) {
            ctx->pc = 0x362250u;
            return;
        }
    }
    ctx->pc = 0x3621E8u;
}
