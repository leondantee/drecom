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

// Function: entry_002de194
// Address: 0x2de194 - 0x2de1bc
void entry_002de194_0x2de194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002de194_0x2de194");
#endif

    ctx->pc = 0x2de194u;

    // 0x2de194: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de198: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2de198u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2de19c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE19Cu;
    {
        const bool branch_taken_0x2de19c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de19c) {
            ctx->pc = 0x2DE1BCu;
            return;
        }
    }
    ctx->pc = 0x2DE1A4u;
    // 0x2de1a4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de1a8: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2de1a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2de1ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2de1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2de1b0: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2de1b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2de1b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE1B4u;
    {
        const bool branch_taken_0x2de1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de1b4) {
            ctx->pc = 0x2DE1D4u;
            return;
        }
    }
    ctx->pc = 0x2DE1BCu;
}
