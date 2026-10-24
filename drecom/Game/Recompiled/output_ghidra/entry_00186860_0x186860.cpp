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

// Function: entry_00186860
// Address: 0x186860 - 0x186874
void entry_00186860_0x186860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186860_0x186860");
#endif

    ctx->pc = 0x186860u;

    // 0x186860: 0x2e030007  sltiu       $v1, $s0, 0x7
    ctx->pc = 0x186860u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x186864: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x186864u;
    {
        const bool branch_taken_0x186864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186864) {
            ctx->pc = 0x1867F4u;
            return;
        }
    }
    ctx->pc = 0x18686Cu;
    // 0x18686c: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x18686Cu;
    {
        const bool branch_taken_0x18686c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18686c) {
            ctx->pc = 0x186CA0u;
            return;
        }
    }
    ctx->pc = 0x186874u;
}
