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

// Function: entry_001b2088
// Address: 0x1b2088 - 0x1b2098
void entry_001b2088_0x1b2088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2088_0x1b2088");
#endif

    ctx->pc = 0x1b2088u;

    // 0x1b2088: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x1b2088u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1b208c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1B208Cu;
    {
        const bool branch_taken_0x1b208c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b208c) {
            ctx->pc = 0x1B1FF8u;
            return;
        }
    }
    ctx->pc = 0x1B2094u;
    // 0x1b2094: 0x0  nop
    ctx->pc = 0x1b2094u;
    // NOP
    ctx->pc = 0x1b2098u;
}
