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

// Function: entry_0018e2a8
// Address: 0x18e2a8 - 0x18e2bc
void entry_0018e2a8_0x18e2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e2a8_0x18e2a8");
#endif

    ctx->pc = 0x18e2a8u;

    // 0x18e2a8: 0x1640ffc0  bnez        $s2, . + 4 + (-0x40 << 2)
    ctx->pc = 0x18E2A8u;
    {
        const bool branch_taken_0x18e2a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e2a8) {
            ctx->pc = 0x18E1ACu;
            return;
        }
    }
    ctx->pc = 0x18E2B0u;
    // 0x18e2b0: 0x8eb00058  lw          $s0, 0x58($s5)
    ctx->pc = 0x18e2b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x18e2b4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x18E2B4u;
    {
        const bool branch_taken_0x18e2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e2b4) {
            ctx->pc = 0x18E420u;
            return;
        }
    }
    ctx->pc = 0x18E2BCu;
}
