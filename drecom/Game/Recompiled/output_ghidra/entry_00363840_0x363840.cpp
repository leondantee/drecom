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

// Function: entry_00363840
// Address: 0x363840 - 0x36387c
void entry_00363840_0x363840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00363840_0x363840");
#endif

    ctx->pc = 0x363840u;

    // 0x363840: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x363840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363844: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x363844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x363848: 0x247203f0  addiu       $s2, $v1, 0x3F0
    ctx->pc = 0x363848u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1008));
    // 0x36384c: 0x8e530034  lw          $s3, 0x34($s2)
    ctx->pc = 0x36384cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x363850: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x363850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x363854: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x363854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363858: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x363858u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36385c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x36385cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363860: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x363860u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x363864: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x363864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363868: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x363868u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36386c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x36386cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363870: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x363870u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x363874: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x363874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363878: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x363878u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x36387cu;
}
