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

// Function: entry_001c7f5c
// Address: 0x1c7f5c - 0x1c7f8c
void entry_001c7f5c_0x1c7f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7f5c_0x1c7f5c");
#endif

    ctx->pc = 0x1c7f5cu;

    // 0x1c7f5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c7f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7f60: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7f64: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1c7f64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c7f68: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7f6c: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x1c7f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7f70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7f74: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c7f74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7f78: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7f7c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1c7f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7f80: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1c7f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c7f84: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7f88: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1c7f88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x1c7f8cu;
}
