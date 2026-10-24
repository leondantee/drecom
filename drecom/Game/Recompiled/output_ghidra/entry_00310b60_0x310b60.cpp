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

// Function: entry_00310b60
// Address: 0x310b60 - 0x310bb8
void entry_00310b60_0x310b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00310b60_0x310b60");
#endif

    ctx->pc = 0x310b60u;

    // 0x310b60: 0x2e230008  sltiu       $v1, $s1, 0x8
    ctx->pc = 0x310b60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x310b64: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x310B64u;
    {
        const bool branch_taken_0x310b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x310b64) {
            ctx->pc = 0x310B1Cu;
            return;
        }
    }
    ctx->pc = 0x310B6Cu;
    // 0x310b6c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x310b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310b70: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x310b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x310b74: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x310b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x310b78: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x310b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x310b7c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x310b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x310b80: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x310b80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    // 0x310b84: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x310b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x310b88: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310b8c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x310b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x310b90: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310b94: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x310b94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x310b98: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310b9c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x310b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x310ba0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310ba4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x310ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x310ba8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310bac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x310bacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x310bb0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x310BB0u;
    {
        const bool branch_taken_0x310bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310bb0) {
            ctx->pc = 0x310D00u;
            return;
        }
    }
    ctx->pc = 0x310BB8u;
}
