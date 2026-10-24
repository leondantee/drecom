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

// Function: entry_002c41d4
// Address: 0x2c41d4 - 0x2c4208
void entry_002c41d4_0x2c41d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c41d4_0x2c41d4");
#endif

    ctx->pc = 0x2c41d4u;

    // 0x2c41d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2c41d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c41d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c41d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c41dc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c41dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c41e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c41e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c41e4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2c41e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c41e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c41e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c41ec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c41ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c41f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c41f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c41f4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c41f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c41f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c41f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c41fc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c41fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2c4200: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C4200u;
    {
        const bool branch_taken_0x2c4200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4200) {
            ctx->pc = 0x2C4234u;
            return;
        }
    }
    ctx->pc = 0x2C4208u;
}
