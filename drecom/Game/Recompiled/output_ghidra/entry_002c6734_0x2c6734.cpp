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

// Function: entry_002c6734
// Address: 0x2c6734 - 0x2c6754
void entry_002c6734_0x2c6734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c6734_0x2c6734");
#endif

    ctx->pc = 0x2c6734u;

    // 0x2c6734: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6738: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x2c6738u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x2c673c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C673Cu;
    {
        const bool branch_taken_0x2c673c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c673c) {
            ctx->pc = 0x2C6754u;
            return;
        }
    }
    ctx->pc = 0x2C6744u;
    // 0x2c6744: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c6744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6748: 0x8483127c  lh          $v1, 0x127C($a0)
    ctx->pc = 0x2c6748u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4732)));
    // 0x2c674c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c674cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c6750: 0xa483127c  sh          $v1, 0x127C($a0)
    ctx->pc = 0x2c6750u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2c6754u;
}
