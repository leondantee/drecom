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

// Function: entry_001ce878
// Address: 0x1ce878 - 0x1ce8a8
void entry_001ce878_0x1ce878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce878_0x1ce878");
#endif

    ctx->pc = 0x1ce878u;

    // 0x1ce878: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ce878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce87c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce880: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1ce880u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ce884: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce888: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1ce888u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce88c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce890: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1ce890u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce894: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce898: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ce898u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce89c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1ce89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1ce8a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce8a4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1ce8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x1ce8a8u;
}
