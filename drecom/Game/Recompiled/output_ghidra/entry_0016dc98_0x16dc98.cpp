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

// Function: entry_0016dc98
// Address: 0x16dc98 - 0x16dca8
void entry_0016dc98_0x16dc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dc98_0x16dc98");
#endif

    ctx->pc = 0x16dc98u;

    // 0x16dc98: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x16dc98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x16dc9c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x16DC9Cu;
    {
        const bool branch_taken_0x16dc9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16dc9c) {
            ctx->pc = 0x16DC78u;
            return;
        }
    }
    ctx->pc = 0x16DCA4u;
    // 0x16dca4: 0x0  nop
    ctx->pc = 0x16dca4u;
    // NOP
    ctx->pc = 0x16dca8u;
}
