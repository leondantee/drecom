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

// Function: entry_001b6c48
// Address: 0x1b6c48 - 0x1b6c78
void entry_001b6c48_0x1b6c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6c48_0x1b6c48");
#endif

    ctx->pc = 0x1b6c48u;

    // 0x1b6c48: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b6c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6c4c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6c50: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x1b6c50u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1b6c54: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6c58: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1b6c58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b6c5c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6c60: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1b6c60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b6c64: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6c68: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x1b6c68u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b6c6c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1b6c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1b6c70: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6c74: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1b6c74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x1b6c78u;
}
