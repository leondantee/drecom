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

// Function: entry_002fe750
// Address: 0x2fe750 - 0x2fe760
void entry_002fe750_0x2fe750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fe750_0x2fe750");
#endif

    ctx->pc = 0x2fe750u;

    // 0x2fe750: 0x2e430003  sltiu       $v1, $s2, 0x3
    ctx->pc = 0x2fe750u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2fe754: 0x1460ff25  bnez        $v1, . + 4 + (-0xDB << 2)
    ctx->pc = 0x2FE754u;
    {
        const bool branch_taken_0x2fe754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fe754) {
            ctx->pc = 0x2FE3ECu;
            return;
        }
    }
    ctx->pc = 0x2FE75Cu;
    // 0x2fe75c: 0x0  nop
    ctx->pc = 0x2fe75cu;
    // NOP
    ctx->pc = 0x2fe760u;
}
