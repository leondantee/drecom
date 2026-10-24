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

// Function: entry_0035bc20
// Address: 0x35bc20 - 0x35bc30
void entry_0035bc20_0x35bc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035bc20_0x35bc20");
#endif

    ctx->pc = 0x35bc20u;

    // 0x35bc20: 0x2e020019  sltiu       $v0, $s0, 0x19
    ctx->pc = 0x35bc20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x35bc24: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x35BC24u;
    {
        const bool branch_taken_0x35bc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35bc24) {
            ctx->pc = 0x35BB5Cu;
            return;
        }
    }
    ctx->pc = 0x35BC2Cu;
    // 0x35bc2c: 0x0  nop
    ctx->pc = 0x35bc2cu;
    // NOP
    ctx->pc = 0x35bc30u;
}
