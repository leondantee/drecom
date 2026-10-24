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

// Function: entry_00186c90
// Address: 0x186c90 - 0x186ca0
void entry_00186c90_0x186c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186c90_0x186c90");
#endif

    ctx->pc = 0x186c90u;

    // 0x186c90: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x186c90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x186c94: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x186C94u;
    {
        const bool branch_taken_0x186c94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186c94) {
            ctx->pc = 0x186C1Cu;
            return;
        }
    }
    ctx->pc = 0x186C9Cu;
    // 0x186c9c: 0x0  nop
    ctx->pc = 0x186c9cu;
    // NOP
    ctx->pc = 0x186ca0u;
}
