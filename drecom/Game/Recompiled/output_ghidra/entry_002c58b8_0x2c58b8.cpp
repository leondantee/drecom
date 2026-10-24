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

// Function: entry_002c58b8
// Address: 0x2c58b8 - 0x2c5904
void entry_002c58b8_0x2c58b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c58b8_0x2c58b8");
#endif

    ctx->pc = 0x2c58b8u;

    // 0x2c58b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c58b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c58bc: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x2c58bcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x2c58c0: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x2c58c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x2c58c4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2c58c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2c58c8: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x2c58c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x2c58cc: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C58CCu;
    {
        const bool branch_taken_0x2c58cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c58cc) {
            ctx->pc = 0x2C5904u;
            return;
        }
    }
    ctx->pc = 0x2C58D4u;
    // 0x2c58d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c58d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c58d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c58d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c58dc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c58dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c58e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2c58e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c58e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c58e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c58e8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c58e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c58ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c58ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c58f0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c58f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c58f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c58f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c58f8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c58f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c58fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c58fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c5900: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c5900u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2c5904u;
}
