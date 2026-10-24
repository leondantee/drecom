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

// Function: entry_0035bb28
// Address: 0x35bb28 - 0x35bb38
void entry_0035bb28_0x35bb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035bb28_0x35bb28");
#endif

    ctx->pc = 0x35bb28u;

    // 0x35bb28: 0x2e020019  sltiu       $v0, $s0, 0x19
    ctx->pc = 0x35bb28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x35bb2c: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x35BB2Cu;
    {
        const bool branch_taken_0x35bb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35bb2c) {
            ctx->pc = 0x35BAA4u;
            return;
        }
    }
    ctx->pc = 0x35BB34u;
    // 0x35bb34: 0x0  nop
    ctx->pc = 0x35bb34u;
    // NOP
    ctx->pc = 0x35bb38u;
}
