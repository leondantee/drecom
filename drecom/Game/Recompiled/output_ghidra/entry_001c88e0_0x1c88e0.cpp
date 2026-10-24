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

// Function: entry_001c88e0
// Address: 0x1c88e0 - 0x1c8908
void entry_001c88e0_0x1c88e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c88e0_0x1c88e0");
#endif

    ctx->pc = 0x1c88e0u;

    // 0x1c88e0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c88e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c88e4: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x1c88e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1c88e8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C88E8u;
    {
        const bool branch_taken_0x1c88e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c88e8) {
            ctx->pc = 0x1C8908u;
            return;
        }
    }
    ctx->pc = 0x1C88F0u;
    // 0x1c88f0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c88f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c88f4: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x1c88f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1c88f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c88f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c88fc: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x1c88fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c8900: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C8900u;
    {
        const bool branch_taken_0x1c8900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8900) {
            ctx->pc = 0x1C8920u;
            return;
        }
    }
    ctx->pc = 0x1C8908u;
}
