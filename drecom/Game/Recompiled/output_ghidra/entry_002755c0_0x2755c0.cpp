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

// Function: entry_002755c0
// Address: 0x2755c0 - 0x2755d0
void entry_002755c0_0x2755c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002755c0_0x2755c0");
#endif

    ctx->pc = 0x2755c0u;

    // 0x2755c0: 0x2a430006  slti        $v1, $s2, 0x6
    ctx->pc = 0x2755c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2755c4: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2755C4u;
    {
        const bool branch_taken_0x2755c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2755c4) {
            ctx->pc = 0x275538u;
            return;
        }
    }
    ctx->pc = 0x2755CCu;
    // 0x2755cc: 0x0  nop
    ctx->pc = 0x2755ccu;
    // NOP
    ctx->pc = 0x2755d0u;
}
