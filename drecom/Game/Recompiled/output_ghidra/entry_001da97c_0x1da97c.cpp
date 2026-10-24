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

// Function: entry_001da97c
// Address: 0x1da97c - 0x1da990
void entry_001da97c_0x1da97c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da97c_0x1da97c");
#endif

    ctx->pc = 0x1da97cu;

    // 0x1da97c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1da97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1da980: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1da980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1da984: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1da984u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1da988: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DA988u;
    {
        const bool branch_taken_0x1da988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da988) {
            ctx->pc = 0x1DA9A8u;
            return;
        }
    }
    ctx->pc = 0x1DA990u;
}
