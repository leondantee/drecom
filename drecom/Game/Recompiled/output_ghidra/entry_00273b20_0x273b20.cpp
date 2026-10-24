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

// Function: entry_00273b20
// Address: 0x273b20 - 0x273b30
void entry_00273b20_0x273b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273b20_0x273b20");
#endif

    ctx->pc = 0x273b20u;

    // 0x273b20: 0x2a460006  slti        $a2, $s2, 0x6
    ctx->pc = 0x273b20u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x273b24: 0x14c0ffdc  bnez        $a2, . + 4 + (-0x24 << 2)
    ctx->pc = 0x273B24u;
    {
        const bool branch_taken_0x273b24 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x273b24) {
            ctx->pc = 0x273A98u;
            return;
        }
    }
    ctx->pc = 0x273B2Cu;
    // 0x273b2c: 0x0  nop
    ctx->pc = 0x273b2cu;
    // NOP
    ctx->pc = 0x273b30u;
}
