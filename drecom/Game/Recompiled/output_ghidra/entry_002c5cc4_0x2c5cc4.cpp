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

// Function: entry_002c5cc4
// Address: 0x2c5cc4 - 0x2c5d0c
void entry_002c5cc4_0x2c5cc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c5cc4_0x2c5cc4");
#endif

    ctx->pc = 0x2c5cc4u;

    // 0x2c5cc4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c5cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5cc8: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x2c5cc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x2c5ccc: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2c5cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c5cd0: 0xa482127a  sh          $v0, 0x127A($a0)
    ctx->pc = 0x2c5cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c5cd4: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C5CD4u;
    {
        const bool branch_taken_0x2c5cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5cd4) {
            ctx->pc = 0x2C5D0Cu;
            return;
        }
    }
    ctx->pc = 0x2C5CDCu;
    // 0x2c5cdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c5cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5ce0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5ce4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c5ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c5ce8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2c5ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c5cec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5cf0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c5cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c5cf4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5cf8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c5cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c5cfc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5d00: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c5d00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c5d04: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5d08: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c5d08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2c5d0cu;
}
