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

// Function: entry_00310a40
// Address: 0x310a40 - 0x310a9c
void entry_00310a40_0x310a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00310a40_0x310a40");
#endif

    ctx->pc = 0x310a40u;

    // 0x310a40: 0x2e230008  sltiu       $v1, $s1, 0x8
    ctx->pc = 0x310a40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x310a44: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x310A44u;
    {
        const bool branch_taken_0x310a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x310a44) {
            ctx->pc = 0x3109FCu;
            return;
        }
    }
    ctx->pc = 0x310A4Cu;
    // 0x310a4c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x310a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310a50: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x310a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x310a54: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x310a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x310a58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x310a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x310a5c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x310a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x310a60: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x310a60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    // 0x310a64: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x310a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x310a68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310a6c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x310a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x310a70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x310a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310a74: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310a78: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x310a78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x310a7c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310a80: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x310a80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x310a84: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310a88: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x310a88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x310a8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310a90: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x310a90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x310a94: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x310A94u;
    {
        const bool branch_taken_0x310a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310a94) {
            ctx->pc = 0x310D00u;
            return;
        }
    }
    ctx->pc = 0x310A9Cu;
}
