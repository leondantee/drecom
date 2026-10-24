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

// Function: entry_001580e0
// Address: 0x1580e0 - 0x1580f0
void entry_001580e0_0x1580e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001580e0_0x1580e0");
#endif

    ctx->pc = 0x1580e0u;

    // 0x1580e0: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x1580e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1580e4: 0x1440fedd  bnez        $v0, . + 4 + (-0x123 << 2)
    ctx->pc = 0x1580E4u;
    {
        const bool branch_taken_0x1580e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1580e4) {
            ctx->pc = 0x157C5Cu;
            return;
        }
    }
    ctx->pc = 0x1580ECu;
    // 0x1580ec: 0x0  nop
    ctx->pc = 0x1580ecu;
    // NOP
    ctx->pc = 0x1580f0u;
}
