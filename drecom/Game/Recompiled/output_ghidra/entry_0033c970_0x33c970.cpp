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

// Function: entry_0033c970
// Address: 0x33c970 - 0x33c988
void entry_0033c970_0x33c970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033c970_0x33c970");
#endif

    ctx->pc = 0x33c970u;

    // 0x33c970: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33c970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33c974: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33c974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33c978: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x33c978u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33c97c: 0x1440ff88  bnez        $v0, . + 4 + (-0x78 << 2)
    ctx->pc = 0x33C97Cu;
    {
        const bool branch_taken_0x33c97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33c97c) {
            ctx->pc = 0x33C7A0u;
            return;
        }
    }
    ctx->pc = 0x33C984u;
    // 0x33c984: 0x0  nop
    ctx->pc = 0x33c984u;
    // NOP
    ctx->pc = 0x33c988u;
}
