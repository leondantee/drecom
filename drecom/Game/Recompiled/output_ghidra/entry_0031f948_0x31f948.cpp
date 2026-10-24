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

// Function: entry_0031f948
// Address: 0x31f948 - 0x31f958
void entry_0031f948_0x31f948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031f948_0x31f948");
#endif

    ctx->pc = 0x31f948u;

    // 0x31f948: 0x1600ffa4  bnez        $s0, . + 4 + (-0x5C << 2)
    ctx->pc = 0x31F948u;
    {
        const bool branch_taken_0x31f948 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f948) {
            ctx->pc = 0x31F7DCu;
            return;
        }
    }
    ctx->pc = 0x31F950u;
    // 0x31f950: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x31F950u;
    {
        const bool branch_taken_0x31f950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f950) {
            ctx->pc = 0x31FAE0u;
            return;
        }
    }
    ctx->pc = 0x31F958u;
}
