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

// Function: entry_002c9398
// Address: 0x2c9398 - 0x2c93b8
void entry_002c9398_0x2c9398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c9398_0x2c9398");
#endif

    ctx->pc = 0x2c9398u;

    // 0x2c9398: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c9398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c939c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2c939cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2c93a0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C93A0u;
    {
        const bool branch_taken_0x2c93a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c93a0) {
            ctx->pc = 0x2C93B8u;
            return;
        }
    }
    ctx->pc = 0x2C93A8u;
    // 0x2c93a8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c93a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c93ac: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2c93acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2c93b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c93b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c93b4: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2c93b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2c93b8u;
}
