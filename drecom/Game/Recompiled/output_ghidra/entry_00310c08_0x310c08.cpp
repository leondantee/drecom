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

// Function: entry_00310c08
// Address: 0x310c08 - 0x310c60
void entry_00310c08_0x310c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00310c08_0x310c08");
#endif

    ctx->pc = 0x310c08u;

    // 0x310c08: 0x2e230008  sltiu       $v1, $s1, 0x8
    ctx->pc = 0x310c08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x310c0c: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x310C0Cu;
    {
        const bool branch_taken_0x310c0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x310c0c) {
            ctx->pc = 0x310BC4u;
            return;
        }
    }
    ctx->pc = 0x310C14u;
    // 0x310c14: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x310c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310c18: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x310c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x310c1c: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x310c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x310c20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x310c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x310c24: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x310c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x310c28: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x310c28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    // 0x310c2c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x310c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x310c30: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310c34: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x310c34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x310c38: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310c3c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x310c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x310c40: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310c44: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x310c44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x310c48: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310c4c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x310c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x310c50: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310c54: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x310c54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x310c58: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x310C58u;
    {
        const bool branch_taken_0x310c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310c58) {
            ctx->pc = 0x310D00u;
            return;
        }
    }
    ctx->pc = 0x310C60u;
}
