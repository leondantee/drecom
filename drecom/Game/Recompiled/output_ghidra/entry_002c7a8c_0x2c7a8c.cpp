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

// Function: entry_002c7a8c
// Address: 0x2c7a8c - 0x2c7aac
void entry_002c7a8c_0x2c7a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c7a8c_0x2c7a8c");
#endif

    ctx->pc = 0x2c7a8cu;

    // 0x2c7a8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7a90: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2c7a90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2c7a94: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C7A94u;
    {
        const bool branch_taken_0x2c7a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7a94) {
            ctx->pc = 0x2C7AACu;
            return;
        }
    }
    ctx->pc = 0x2C7A9Cu;
    // 0x2c7a9c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c7a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7aa0: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2c7aa0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2c7aa4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c7aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c7aa8: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2c7aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2c7aacu;
}
