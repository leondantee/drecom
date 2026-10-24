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

// Function: entry_003717b0
// Address: 0x3717b0 - 0x3717c8
void entry_003717b0_0x3717b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003717b0_0x3717b0");
#endif

    ctx->pc = 0x3717b0u;

    // 0x3717b0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3717b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3717b4: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x3717b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x3717b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3717b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3717bc: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x3717bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x3717c0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x3717C0u;
    {
        const bool branch_taken_0x3717c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3717c0) {
            ctx->pc = 0x371860u;
            return;
        }
    }
    ctx->pc = 0x3717C8u;
}
