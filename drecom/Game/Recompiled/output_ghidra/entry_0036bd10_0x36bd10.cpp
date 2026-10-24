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

// Function: entry_0036bd10
// Address: 0x36bd10 - 0x36bd20
void entry_0036bd10_0x36bd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036bd10_0x36bd10");
#endif

    ctx->pc = 0x36bd10u;

    // 0x36bd10: 0x2e620005  sltiu       $v0, $s3, 0x5
    ctx->pc = 0x36bd10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x36bd14: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x36BD14u;
    {
        const bool branch_taken_0x36bd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36bd14) {
            ctx->pc = 0x36BC18u;
            return;
        }
    }
    ctx->pc = 0x36BD1Cu;
    // 0x36bd1c: 0x0  nop
    ctx->pc = 0x36bd1cu;
    // NOP
    ctx->pc = 0x36bd20u;
}
