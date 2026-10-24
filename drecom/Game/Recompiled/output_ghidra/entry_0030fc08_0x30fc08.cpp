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

// Function: entry_0030fc08
// Address: 0x30fc08 - 0x30fc1c
void entry_0030fc08_0x30fc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030fc08_0x30fc08");
#endif

    ctx->pc = 0x30fc08u;

    // 0x30fc08: 0x2e230008  sltiu       $v1, $s1, 0x8
    ctx->pc = 0x30fc08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x30fc0c: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x30FC0Cu;
    {
        const bool branch_taken_0x30fc0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30fc0c) {
            ctx->pc = 0x30FB38u;
            return;
        }
    }
    ctx->pc = 0x30FC14u;
    // 0x30fc14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30FC14u;
    {
        const bool branch_taken_0x30fc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fc14) {
            ctx->pc = 0x30FC34u;
            return;
        }
    }
    ctx->pc = 0x30FC1Cu;
}
