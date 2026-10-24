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

// Function: entry_001b2c34
// Address: 0x1b2c34 - 0x1b2c44
void entry_001b2c34_0x1b2c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2c34_0x1b2c34");
#endif

    ctx->pc = 0x1b2c34u;

    // 0x1b2c34: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b2c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b2c38: 0xa24211f0  sb          $v0, 0x11F0($s2)
    ctx->pc = 0x1b2c38u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4592), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b2c3c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1B2C3Cu;
    {
        const bool branch_taken_0x1b2c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2c3c) {
            ctx->pc = 0x1B2CE0u;
            return;
        }
    }
    ctx->pc = 0x1B2C44u;
}
