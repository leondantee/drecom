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

// Function: entry_00144688
// Address: 0x144688 - 0x14469c
void entry_00144688_0x144688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144688_0x144688");
#endif

    ctx->pc = 0x144688u;

    // 0x144688: 0x2e23000f  sltiu       $v1, $s1, 0xF
    ctx->pc = 0x144688u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x14468c: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x14468Cu;
    {
        const bool branch_taken_0x14468c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14468c) {
            ctx->pc = 0x144630u;
            return;
        }
    }
    ctx->pc = 0x144694u;
    // 0x144694: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x144694u;
    {
        const bool branch_taken_0x144694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144694) {
            ctx->pc = 0x1446B4u;
            return;
        }
    }
    ctx->pc = 0x14469Cu;
}
