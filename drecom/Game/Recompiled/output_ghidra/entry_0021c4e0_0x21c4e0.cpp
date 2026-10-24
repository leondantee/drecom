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

// Function: entry_0021c4e0
// Address: 0x21c4e0 - 0x21c4f8
void entry_0021c4e0_0x21c4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c4e0_0x21c4e0");
#endif

    ctx->pc = 0x21c4e0u;

    // 0x21c4e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x21c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21c4e4: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x21c4e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x21c4e8: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x21C4E8u;
    {
        const bool branch_taken_0x21c4e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c4e8) {
            ctx->pc = 0x21C418u;
            return;
        }
    }
    ctx->pc = 0x21C4F0u;
    // 0x21c4f0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x21C4F0u;
    {
        const bool branch_taken_0x21c4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c4f0) {
            ctx->pc = 0x21C5A8u;
            return;
        }
    }
    ctx->pc = 0x21C4F8u;
}
