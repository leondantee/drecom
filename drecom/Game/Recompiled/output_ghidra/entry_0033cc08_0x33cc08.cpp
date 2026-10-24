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

// Function: entry_0033cc08
// Address: 0x33cc08 - 0x33cc20
void entry_0033cc08_0x33cc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033cc08_0x33cc08");
#endif

    ctx->pc = 0x33cc08u;

    // 0x33cc08: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33cc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33cc0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33cc10: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x33cc10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33cc14: 0x1440ff7a  bnez        $v0, . + 4 + (-0x86 << 2)
    ctx->pc = 0x33CC14u;
    {
        const bool branch_taken_0x33cc14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33cc14) {
            ctx->pc = 0x33CA00u;
            return;
        }
    }
    ctx->pc = 0x33CC1Cu;
    // 0x33cc1c: 0x0  nop
    ctx->pc = 0x33cc1cu;
    // NOP
    ctx->pc = 0x33cc20u;
}
