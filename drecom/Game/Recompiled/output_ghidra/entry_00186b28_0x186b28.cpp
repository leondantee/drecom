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

// Function: entry_00186b28
// Address: 0x186b28 - 0x186b3c
void entry_00186b28_0x186b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186b28_0x186b28");
#endif

    ctx->pc = 0x186b28u;

    // 0x186b28: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x186b28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x186b2c: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x186B2Cu;
    {
        const bool branch_taken_0x186b2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186b2c) {
            ctx->pc = 0x186ABCu;
            return;
        }
    }
    ctx->pc = 0x186B34u;
    // 0x186b34: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x186B34u;
    {
        const bool branch_taken_0x186b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186b34) {
            ctx->pc = 0x186CA0u;
            return;
        }
    }
    ctx->pc = 0x186B3Cu;
}
