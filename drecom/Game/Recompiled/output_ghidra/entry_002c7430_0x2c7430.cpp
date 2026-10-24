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

// Function: entry_002c7430
// Address: 0x2c7430 - 0x2c7450
void entry_002c7430_0x2c7430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c7430_0x2c7430");
#endif

    ctx->pc = 0x2c7430u;

    // 0x2c7430: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c7430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7434: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2c7434u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2c7438: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C7438u;
    {
        const bool branch_taken_0x2c7438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7438) {
            ctx->pc = 0x2C7450u;
            return;
        }
    }
    ctx->pc = 0x2C7440u;
    // 0x2c7440: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c7440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7444: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2c7444u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2c7448: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c7448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c744c: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2c744cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2c7450u;
}
