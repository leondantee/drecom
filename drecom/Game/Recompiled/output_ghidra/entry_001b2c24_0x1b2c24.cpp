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

// Function: entry_001b2c24
// Address: 0x1b2c24 - 0x1b2c34
void entry_001b2c24_0x1b2c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2c24_0x1b2c24");
#endif

    ctx->pc = 0x1b2c24u;

    // 0x1b2c24: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1b2c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b2c28: 0xa24311f0  sb          $v1, 0x11F0($s2)
    ctx->pc = 0x1b2c28u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4592), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b2c2c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1B2C2Cu;
    {
        const bool branch_taken_0x1b2c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2c2c) {
            ctx->pc = 0x1B2CE0u;
            return;
        }
    }
    ctx->pc = 0x1B2C34u;
}
