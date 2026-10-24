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

// Function: entry_001a1530
// Address: 0x1a1530 - 0x1a1540
void entry_001a1530_0x1a1530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1530_0x1a1530");
#endif

    ctx->pc = 0x1a1530u;

    // 0x1a1530: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x1a1530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1a1534: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1A1534u;
    {
        const bool branch_taken_0x1a1534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1534) {
            ctx->pc = 0x1A14B0u;
            return;
        }
    }
    ctx->pc = 0x1A153Cu;
    // 0x1a153c: 0x0  nop
    ctx->pc = 0x1a153cu;
    // NOP
    ctx->pc = 0x1a1540u;
}
