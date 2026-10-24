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

// Function: entry_0021e900
// Address: 0x21e900 - 0x21e914
void entry_0021e900_0x21e900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021e900_0x21e900");
#endif

    ctx->pc = 0x21e900u;

    // 0x21e900: 0x2e030007  sltiu       $v1, $s0, 0x7
    ctx->pc = 0x21e900u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x21e904: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x21E904u;
    {
        const bool branch_taken_0x21e904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e904) {
            ctx->pc = 0x21E894u;
            return;
        }
    }
    ctx->pc = 0x21E90Cu;
    // 0x21e90c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21E90Cu;
    {
        const bool branch_taken_0x21e90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e90c) {
            ctx->pc = 0x21E930u;
            return;
        }
    }
    ctx->pc = 0x21E914u;
}
