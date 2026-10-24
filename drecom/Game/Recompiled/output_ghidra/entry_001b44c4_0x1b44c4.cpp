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

// Function: entry_001b44c4
// Address: 0x1b44c4 - 0x1b44d4
void entry_001b44c4_0x1b44c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b44c4_0x1b44c4");
#endif

    ctx->pc = 0x1b44c4u;

    // 0x1b44c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b44c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b44c8: 0xa20211f0  sb          $v0, 0x11F0($s0)
    ctx->pc = 0x1b44c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4592), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b44cc: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1B44CCu;
    {
        const bool branch_taken_0x1b44cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b44cc) {
            ctx->pc = 0x1B4650u;
            return;
        }
    }
    ctx->pc = 0x1B44D4u;
}
