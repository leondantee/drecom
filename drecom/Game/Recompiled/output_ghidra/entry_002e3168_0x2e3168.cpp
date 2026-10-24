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

// Function: entry_002e3168
// Address: 0x2e3168 - 0x2e3198
void entry_002e3168_0x2e3168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e3168_0x2e3168");
#endif

    ctx->pc = 0x2e3168u;

    // 0x2e3168: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e3168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e316c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e316cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e3170: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e3170u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e3174: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e3174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3178: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e3178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e317c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e317cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e3180: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e3180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e3184: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e3184u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e3188: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e3188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e318c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e318cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e3190: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e3190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e3194: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e3194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2e3198u;
}
