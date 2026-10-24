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

// Function: entry_001c8a3c
// Address: 0x1c8a3c - 0x1c8a98
void entry_001c8a3c_0x1c8a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8a3c_0x1c8a3c");
#endif

    ctx->pc = 0x1c8a3cu;

    // 0x1c8a3c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8a40: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x1c8a40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c8a44: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1c8a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1c8a48: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x1c8a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1c8a4c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C8A4Cu;
    {
        const bool branch_taken_0x1c8a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8a4c) {
            ctx->pc = 0x1C8A98u;
            return;
        }
    }
    ctx->pc = 0x1C8A54u;
    // 0x1c8a54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c8a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8a58: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8a5c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1c8a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c8a60: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1c8a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1c8a64: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8a68: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1c8a68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c8a6c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8a70: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c8a70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8a74: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8a78: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c8a78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8a7c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8a80: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1c8a80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1c8a84: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1c8a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c8a88: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c8a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8a8c: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1c8a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8a90: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x1C8A90u;
    {
        const bool branch_taken_0x1c8a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8a90) {
            ctx->pc = 0x1C8EA4u;
            return;
        }
    }
    ctx->pc = 0x1C8A98u;
}
