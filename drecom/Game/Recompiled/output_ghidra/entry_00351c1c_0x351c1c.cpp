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

// Function: entry_00351c1c
// Address: 0x351c1c - 0x351c48
void entry_00351c1c_0x351c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00351c1c_0x351c1c");
#endif

    ctx->pc = 0x351c1cu;

    // 0x351c1c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x351c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351c20: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x351c20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x351c24: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x351c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x351c28: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x351c28u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x351c2c: 0x1480001b  bnez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x351C2Cu;
    {
        const bool branch_taken_0x351c2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x351c2c) {
            ctx->pc = 0x351C9Cu;
            return;
        }
    }
    ctx->pc = 0x351C34u;
    // 0x351c34: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x351c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x351c38: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351c3c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x351c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x351c40: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x351C40u;
    {
        const bool branch_taken_0x351c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351c40) {
            ctx->pc = 0x351C9Cu;
            return;
        }
    }
    ctx->pc = 0x351C48u;
}
