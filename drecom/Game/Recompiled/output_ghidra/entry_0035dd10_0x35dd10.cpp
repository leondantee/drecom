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

// Function: entry_0035dd10
// Address: 0x35dd10 - 0x35dd20
void entry_0035dd10_0x35dd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035dd10_0x35dd10");
#endif

    ctx->pc = 0x35dd10u;

    // 0x35dd10: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x35dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x35dd14: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x35DD14u;
    {
        const bool branch_taken_0x35dd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35dd14) {
            ctx->pc = 0x35DC40u;
            return;
        }
    }
    ctx->pc = 0x35DD1Cu;
    // 0x35dd1c: 0x0  nop
    ctx->pc = 0x35dd1cu;
    // NOP
    ctx->pc = 0x35dd20u;
}
