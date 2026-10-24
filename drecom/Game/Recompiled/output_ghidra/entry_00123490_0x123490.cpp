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

// Function: entry_00123490
// Address: 0x123490 - 0x1234a4
void entry_00123490_0x123490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123490_0x123490");
#endif

    ctx->pc = 0x123490u;

    // 0x123490: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x123490u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x123494: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x123494u;
    {
        const bool branch_taken_0x123494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x123494) {
            ctx->pc = 0x123450u;
            return;
        }
    }
    ctx->pc = 0x12349Cu;
    // 0x12349c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x12349Cu;
    {
        const bool branch_taken_0x12349c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12349c) {
            ctx->pc = 0x123528u;
            return;
        }
    }
    ctx->pc = 0x1234A4u;
}
