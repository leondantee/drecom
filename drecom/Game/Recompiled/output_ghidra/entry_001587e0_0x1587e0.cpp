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

// Function: entry_001587e0
// Address: 0x1587e0 - 0x1587f0
void entry_001587e0_0x1587e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001587e0_0x1587e0");
#endif

    ctx->pc = 0x1587e0u;

    // 0x1587e0: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x1587e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1587e4: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1587E4u;
    {
        const bool branch_taken_0x1587e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1587e4) {
            ctx->pc = 0x158780u;
            return;
        }
    }
    ctx->pc = 0x1587ECu;
    // 0x1587ec: 0x0  nop
    ctx->pc = 0x1587ecu;
    // NOP
    ctx->pc = 0x1587f0u;
}
