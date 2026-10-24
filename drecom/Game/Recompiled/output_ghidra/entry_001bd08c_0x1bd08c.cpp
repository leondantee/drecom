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

// Function: entry_001bd08c
// Address: 0x1bd08c - 0x1bd0bc
void entry_001bd08c_0x1bd08c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd08c_0x1bd08c");
#endif

    ctx->pc = 0x1bd08cu;

    // 0x1bd08c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bd08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd090: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bd090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd094: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x1bd094u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1bd098: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd09c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1bd09cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd0a0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bd0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd0a4: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1bd0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd0a8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd0ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bd0acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd0b0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1bd0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1bd0b4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd0b8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1bd0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x1bd0bcu;
}
